## ERRORLOG.md
### Undefined Symbol Linker Error - September 10, 2026

====================[ Build | 03_adt_stack | Debug ]============================  
/Users/seanvalenzuela/Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake --build /Users/seanvalenzuela/CS210/CS210CPPRepo/cmake-build-debug --target 03_adt_stack -- -j 8  
[ 33%] Building CXX object CMakeFiles/03_adt_stack.dir/03_adt_stack/Stack.cpp.o  
[ 66%] Linking CXX executable 03_adt_stack  
Undefined symbols for architecture arm64:  
"Stack::Stack()", referenced from:  
_main in main.cpp.o  
ld: symbol(s) not found for architecture arm64  
clang++: error: linker command failed with exit code 1 (use -v to see invocation)  
make[3]: *** [03_adt_stack] Error 1  
make[2]: *** [CMakeFiles/03_adt_stack.dir/all] Error 2  
make[1]: *** [CMakeFiles/03_adt_stack.dir/rule] Error 2  
make: *** [03_adt_stack] Error 2  

An undefined symbol linker error occurred due to the Stack class interface in Stack.h declaring a Stack() constructor, while the Stack.cpp file did not implement it.

This was fixed by simply implementing a Stack() constructor in Stack.cpp.
### Segmentation Fault - September 10, 2026

/Users/seanvalenzuela/CS210/CS210CPPRepo/cmake-build-debug/03_adt_stack

Process finished with exit code 139 (interrupted by signal 11:SIGSEGV)

A segmentation fault occurred because although I had implemented a Stack() constructor in Stack.cpp to fix the previous error, I forgot to initialize topIndex and its value.

This was fixed by initializing topIndex to -1 in the constructor, as a topIndex of -1 represents an empty stack and there are no valid array indices below zero (negative).
