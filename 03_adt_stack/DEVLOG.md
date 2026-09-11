## DEVLOG.md
#### Entry 1 - September 10, 2026
- Completed Stack.h file.
- Replaced the original vector-based Stack class interface from the original cloned repo with the array-based Stack class interface.
- The decision was made as the assignment requires the stack to be implemented using an array rather than the original vector implementation (code was given on Canvas).
- If I were to do this differently, I would first compare the two Stack class interfaces, taking note of the similarities and differences between vector-based and array-based implementations.

#### Entry 2 - September 10, 2026
- Worked on Stack.cpp file.
- Implemented the push, pop, peek, isEmpty, isFull, and size methods.
- Used topIndex to represent the top position of a stack, while -1 represented an empty stack.
- The decision to use a topIndex was to help keep track of the stack's top position and in a sense, its capacity as well, indicating whether it is full or not.
- The decision to have -1 represent an empty stack was due to the fact that there are no valid array indices below zero.
- If I were to do this differently, I would research the differences between using vectors and arrays when dealing with stacks rather than going straight into implementing the methods. This would give me a better idea of which aspects are beneficial and which are not, and ultimately help me better understand both approaches.

#### Entry 3 - September 10, 2026
- Updated Stack.cpp file.
- Implemented the Stack constructor.
- This fix was made after an error regarding the Stack constructor occurred during testing. This error was due to the code for the Stack class in the Stack.h file declaring the constructor Stack();, which I forgot to implement in the Stack.cpp file. This was fixed by adding the definition of the Stack constructor and initializing topIndex to -1, as a stack will be empty by default.
- If I were to do this differently, I would first look over both the Stack.h and Stack.cpp files and ensure that the constructors and methods are both declared and implemented correctly before testing.