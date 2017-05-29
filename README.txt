Running boost 1.64
Make sure to build boost & the dll in 32 bit mode

the logging directory (as of 5/28/2017) is C:\Program Files (x86)\Steam\steamapps\common\rocketleague\Binaries\Win32
be careful of printing out function names, log files can get REALLY big fast (100k lines in a minute)

inside of the project, you will need to configure 2 paths. 

Go to your Configuration Properties for your project, C/C++->General->Additional Include Directories
Change C:/Boost to your main boost folder, not the path of the of the headers.

Next change your linker->General->Additional Library Directories and change your Library from C:\Boost\Stage\Lib to the
directories of the 32 bit .lib files you built 