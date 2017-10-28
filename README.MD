# RLModding


## TODO

- Possible Lan implementation: Use UFunction->Script To give us access to the generate keys by hooking a GNatives
- Add in a way to build raw packets into high level objects (decrypting the packets too)
- Give gamestate its own class with some operators and so we dont have to use the Globals.h inside of interfaces (IDK what i was thinking)
- Make LanMods.h and ClientMods.h Each one will have its own unique stuff. LanMods will have player indexing and what not, mod conflictions and is focused on gamemodes and needs ways of getting a single car 

## Known Bugs

- Enabling custom blog and then closing the game will result in a crash almost always.  Scaleform error?


## Bored? I know just the solution!

- Add in controller support for PS4,XBOX,WII U
    - [XInput.h Example](https://www.codeproject.com/Articles/26949/Xbox-Controller-Input-in-C-with-XInput)
- FileSystem stuff and for mod "profiles" and configs


## Game Mode Ideas 
 - If you're supersonic for too long apply random shit
 - Give perks for having full boost, loose perks at 2/3s boost, 1/3, etc.
 - Rumble item to blow up everyone on opposing team
 - Rumble item to spawn bots to chase specific player for X seconds
 - Inverse gravity 
 - Johns silly idea 


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

### Whew. Thanks Psyonix!

- ~~Directly setting the engines network security keys to some hardcoded keys~~
- ~~Above method + adding the hardcoded keys to an RPC_GenerateKeys object and adding it to the GenereateKeysRPCs array in OnlineGameJoin_X~~
- ~~Found that SessionId is connected to your player id so we can't use the same one for everybody~~
- ~~Changing the developer environment~~

