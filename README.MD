# RLModding

### Running boost 1.64
Make sure to build boost & the dll in 32 bit mode

the logging directory (as of 5/28/2017) is C:\Program Files (x86)\Steam\steamapps\common\rocketleague\Binaries\Win32
be careful of printing out function names, log files can get REALLY big fast (100k lines in a minute)

inside of the project, you will need to configure 2 paths. 

Go to your Configuration Properties for your project, C/C++->General->Additional Include Directories
Change C:/Boost to your main boost folder, not the path of the of the headers.

Next change your linker->General->Additional Library Directories and change your Library from C:\Boost\Stage\Lib to the
directories of the 32 bit .lib files you built 


### How to create a new module
- Extend ModBase publically. See TestClass.h and TestClass.cpp as examples.
- Add your module to the ModHandler array list by writing this line in the ModHandler constructor:
```
AddMod(new TestClass());
```

### How to hook a new function
Copy the name of the function and use the addFunction method to bind a function name to a function inside the ModBase class
```
addFunction("Function TAGame.PlayerController_Menu_TA.PlayerTick",&ModBase::MainMenuTick);
```

```
virtual void MainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}
```

```
void TestClass::MainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {
	std::cout << "ModBase mainmenu tick called" << std::endl;
}
```
So the method call flow looks like:
main -> ModBase::MainMenuTick -> YourClass::MainMenuTick

To use the functions inside your custom mod, add the function you want to use into your header class and the eventmanager will call your class along with every other class that also uses that function at the same time


### TODO
- Add in keybinds for toggleing modules with JSON so every mod can have its own bind.
- Add in a way to build raw packets into high level objects (decrypting the packets too)
