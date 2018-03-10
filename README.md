# THIS IS CRAZYTOWN

Look at b.cpp and there's a variable that gets instantiated at startup that depends on something in a.cpp but also there's something in a.cpp that depends on something in b.cpp

Here's the output:

```
andrew@roborio-9999-frc:~/Documents/c_tmp 
> clang++ *.cpp
andrew@roborio-9999-frc:~/Documents/c_tmp 
> ./a.out
Panda a is being constructed
Woof woof I am a
Other panda: Woof woof I am 
Panda b is being constructed
Woof woof I am b
Other panda: Woof woof I am a
main
```
