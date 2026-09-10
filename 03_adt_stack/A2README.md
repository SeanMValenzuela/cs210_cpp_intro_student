## Reflection Questions

#### 1. What value does topIndex hold immediately after construction, and why does that specific value make isEmpty() return the right answer with no special-casting?
topIndex holds the value of -1 immediately after construction. 
That specific value makes isEmpty() return the right answer with no special casting since there are no valid element indexes below 0. 
This enables isEmpty() to simply check if topIndex == -1, and return whether it is true or false. 

#### 2. Walk through push step by step, in words: what happens to data and topIndex, in what order, and why would swapping that order break the stack?
When the method push is called, the program first checks if the stack is full using the isFull() method. 
If the stack is indeed full, the program prints out "Stack is full, cannot push" to notify the user that they cannot push onto the stack and proceeds to return the program. 
However, if the stack is not full, topIndex is incremented by one and the value is added to the stack named data with that index. 
Swapping those two actions would break the stack as topIndex represents the index of the current top element of the stack, which means the value being added to the topIndex prior to incrementing would overwrite the top element of the stack.

#### 3. Give the time complexity of push, pop, peek, isEmpty, isFull, and size, individually, in Big-O. For each one, justify it by describing what your code actually does, not by naming the general rule for stacks.
push: O(1)
push first checks isFull(), increments topIndex once if false, and proceeds to store the value in the top position of the stack.
There is no loop and the number of operations does not depend on the number of elements in the stack, so it is in constant time.

pop: O(1)
pop first checks isEmpty(), assigns the value at topIndex to the int value if false, decrements topIndex once, and returns the int value stored.
There is no loop and the number of operations does not depend on the number of elements in the stack, so it is in constant time.

peek: O(1)
peek checks isEmpty(), and proceeds to return the value at topIndex of the stack. 
There is no loop and the number of operations does not depend on the number of elements in the stack, so it is in constant time.

isEmpty: O(1)
isEmpty checks if topIndex is equal to -1, and returns true if so, and false otherwise.
There is no loop and the number of operations does not depend on the number of elements in the stack, so it is in constant time.

isFull: O(1)
isFull checks if topIndex is equal to 99, and returns true if so, and false otherwise.
There is no loop and the number of operations does not depend on the number of elements in the stack, so it is in constant time.

size: O(1)
size returns topIndex plus 1 added onto it.
There is no loop and the number of operations does not depend on the number of elements in the stack, so it is in constant time.

#### 4. Exactly what happens in your code when push is called while the stack is full? State what prints (if anything), what gets returned (if anything), and whether topIndex changes. Then say why you chose that behavior.
When push is called while the stack is full, the program prints out "Stack is full, cannot push" and proceeds to return to exit the method without returning any actual value, as the method has a return type of void.
topIndex does not change if push is called while the stack is full, however, it is incremented by one if push is called while the stack is not full.
I chose this behavior as a stack should not be modified when there is no available space left.

#### 5. Exactly what happens when pop or peek is called while the stack is empty? Same level of detail as above.
When pop is called while the stack is empty, the program prints out "Stack is empty, cannot pop" and returns an int value of -1, as the method has a return type of int.
Similarly, when peek is called while the stack is empty, the program prints "Stack is empty, cannot peek" and also returns an int value of -1, as the method has a return type of int as well.
With pop, topIndex is not changed if the method is called when the stack is empty, but does get decremented if the method is called when the stack is not empty.
As for peek, topIndex is not changed under any circumstances.
This behavior was chosen as removing a value is impossible if a stack does not contain any, and modification to a stack is not allowed when a user simply wants to conduct a peek.

#### 6. Your array is fixed at 100 slots. If a caller needed more room than that, what would have to change in your class to support it, and what would it likely cost in terms of the time complexity you gave in question 3?
If a caller needed more room than 100 slots in a stack, the size of 100 specified in the Stack.h file can simply be changed to a higher value.
However, that means that the stack's capacity would still be fixed, and not necessarily be dynamic in size. 
To have a stack with dynamic size, a resizable array would need to be implemented in the class, which would likely make methods, such as push, sometimes run in O(n) instead of O(1) as every element would need to be copied from one position to another for example.

#### 7. Without looking anything up: if this stack were built on a linked list instead of an array, name one advantage and one disadvantage that trade-off would bring, based on what you already know about how arrays and pointers behave differently.
One advantage of the stack being built on a linked list is that its size would be dynamic rather than being fixed, which helps resolve the problem outlined in question 6.
One disadvantage of the stack being built on a linked list is more memory would need to be allocated due to the need for pointers, which connect the nodes in linked lists.