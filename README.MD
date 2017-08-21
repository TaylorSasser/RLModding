# RLModding

## How To Hook A New Function
Copy the name of the function and use the addFunction method to bind a function name to a function inside the ModBase class
```
SubscribeEvent("Function TAGame.PlayerController_Menu_TA.PlayerTick",&ModBase::MainMenuTick);
```

Add a definition to ModBase
```
virtual void MainMenuTick(Event* event) {}
```

Add a definition to your module class (here our module is called TestClass)
```
void TestClass::MainMenuTick(Event* event) {
	std::cout << "ModBase mainmenu tick called" << std::endl;
}
```
So the method call flow looks like:

when TAGame.PlayerController_Menu_TA.PlayerTick is called -> SDK -> ModBase::MainMenuTick -> TestClass::MainMenuTick

## Adding A New Mod
After you've created your mod class you can add it in ModHandler.cpp with the CreateMod function

psuedo code
```
CreateMod<YourClass>("Mod Name", KeyBind, Category, GameStates)
```

Example
```
CreateMod<ZombieGameMode>("Zombie Game Mode",VK_NUMPAD1, Category::Gamemodes, GameState::EXHIBITION | GameState::LAN);
```
You have a class ZombieGameMode binded to numpad 1. It is part of the category Gamemodes and can only be activated when you are in exhibition or LAN.

## Current Boost Libs
- ptree
- json_parser
- lexical_cast

## Game Mode Ideas 
 ~~Strike Through~~ = Done
 - ~~50/50 - Randomly demo someone every X seconds (20 seconds?)~~
 - If you're supersonic for too long apply random shit
 - Give perks for having full boost, loose perks at 2/3s boost, 1/3, etc.
 - Rumble item to blow up everyone on opposing team
 - Rumble item to spawn bots to chase specific player for X seconds

## Printing Keys
EventFactory.cpp
```
SubscribeEvent("Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.SetNetworkKeys",&ModBase::onKeysBeginState);
```

Inside of ModBase.h (Outside of class)
```
struct Keys {
	URPC_KeysBase_X* RPC;
	FPsyNetKeys KeyInfo; //Not sure what struct, just a placeholder
};
```

Virtual function in ModBase.h
```
virtual void onKeysBeginState(Event* e) {
	auto temp = e->getParams<Keys>();
	std::cout << "Service: " << temp->RPC->Service.ToString() << std::endl;
	std::cout << "Server Host: " << temp->RPC->ServerHost.ToString() << std::endl;
	std::cout << "Server Port: " << temp->RPC->ServerPort << std::endl;
	std::cout << "Key: " << temp->RPC->Key.ToString() << std::endl;
	std::cout << "IV: " << temp->RPC->IV.ToString() << std::endl;
	std::cout << "HMAC: " << temp->RPC->HMACKey.ToString() << std::endl;
	std::cout << "Session ID: " << temp->RPC->SessionId.ToString() << std::endl;
}
```

## LAN Attempts

- Directly setting the engines network security keys to some hardcoded keys
- Above method + adding the hardcoded keys to an RPC_GenerateKeys object and adding it to the GenereateKeysRPCs array in OnlineGameJoin_X
- Found that SessionId is connected to your player id so we can't use the same one for everybody
- Changing the developer environment


## TODO

- Possible Lan implementation: Use UFunction->Script To give us access to the generate keys by hooking a GNatives
- Add in a way to build raw packets into high level objects (decrypting the packets too)
