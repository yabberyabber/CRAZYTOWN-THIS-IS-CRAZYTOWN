# THIS IS CRAZYTOWN

Look at b.cpp and there's a variable that gets instantiated at startup that depends on something in a.cpp but also there's something in a.cpp that depends on something in b.cpp

Here's the output:

```
andrew@roborio-9999-frc:~/Documents/c_tmp 
> clang++ *.cpp
andrew@roborio-9999-frc:~/Documents/c_tmp 
> ./a.out
Panda is being constructed 0x6010b0
TrashPanda is being constructed 0x6010a8
main
```
