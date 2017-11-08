# RLModding


## TODO

- General
	- Possible Lan implementation: Use UFunction->Script To give us access to the generate keys by hooking a GNatives
	- Add in a way to build raw packets into high level objects (decrypting the packets too)
	- Give gamestate its own class with some operators and so we dont have to use the Globals.h inside of interfaces (IDK what i was thinking)
	- Make LanMods.h and ClientMods.h Each one will have its own unique stuff. LanMods will have player indexing and what not, mod conflictions and is focused on gamemodes and needs ways of getting a single car 

- Mods
	- When car or ball is invisible add option to show them in replay (Might not be able to get working at all)
	- Add interface for updating server name
	- ~~Add setting for car acceleration~~ (Could have another method)
	- Add setting to toggle unlimited boost in freeplay
	- ~~Add Ball mod options for resetting all balls~~
	- Add HP setting for cars health in game modes
	- Add setting for tornado to vary in height
	- Modify goal explosion properties
	- ~~Add options for specific balls being worth more points~~ (Added option to modify goal points)
	- ~~Apply car scale every new round~~

- GUI
	- Add ability to save IPs to list and load them for joining.
	- Add optional status bar class to modbase for setting status text
	- For player selection pull down add options for "blue team", "orange team", and "all bots"
	- Improve Mutator Mods warning messages

## Known Bugs

- Enabling custom blog and then closing the game will result in a crash almost always.  Scaleform error?
- Ballcam glitches out when in 50/50 or any mod where there is more than 1 ball
- ~~When enabling car mods sticky walls or ceilings are not correct default values~~
- If player is set as match admin and leaves game, their game crashes
- 50/50 continues countdown during replays
- Workshop mod level skip doesn't work if multiplayer

## Changelog

- 3.5 Beta
	- Apply car scale every new rounds
	- RL menus now work even if rocket launcher menus are open

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
 - ~~Invisible game mode (for cars and balls)~~
 - Trampoline mode (cars constantly bounce.  This can be achieved by setting the floor stickiness to negative)
 - Freeze Tag
 - Dodgeball - ball demolishes
 - Capture the ball. Each team has a ball in their goal box and must keep the other team from getting it to their goal.


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
- asio

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

