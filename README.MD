# RLModding

### How to hook a new function
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

### TODO
- Extract parameters from the call function hooks. Still no idea how to do that :/

=- Add in a way to build raw packets into high level objects (decrypting the packets too)
