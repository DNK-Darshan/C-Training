/*

Memory divided into the four segments such as Code, Data, Stack, Heap

1. Code/text : 
    - This section store the executable code like a program's functions and instructions
    - This segment usually read only
    - The size of the text segments depends on the number of instruction and program complexity

2. Data : 
    - The data segment stores the global and static variable of the program.
    - The size of the data segment depends on the number of global and static variable.
    - It is divided into two section 1st is initialized and uninitialized(BSS) section

    A. initialized Data Section :
        - That contains the global and static variable that have been initialized by the programmer.

    B. Uninitialized Data Section :
        - The uninitialized data section is often called the BSS segments.
        - It stores the global and static variables that are not initialized by the programmer.
        - These variables are automatically initialized to zero by the system at runtime.

3. Heap Section :
    - This section is used for a dynamic memory allocation
    - It starts at the end of the BSS segment and grows towards higher memory addresses.
    - Memory in the heap is managed using functions like malloc(), relloc() and free().

4. Stack Section : 
    - Stack store the local variable, funtion parameter and return addresses for each function call.

*/

#include <stdio.h>

static int i = 0;
int main()
{
    return 0;
}
