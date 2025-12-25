
#include <stdio.h>
// Function prototype -A function prototype informs the compiler about a functio
// that will be defined later in the program.
// The void keyword indicates that the function does not return any value.

void display();
int main()
{
    int a; // Variable declaration - a statement that tells the compiler the name of the variable and the type of data it will store.

    display(); // Function call -A function call instructs the compiler to execute
               // the function's body when the call is made.

    return 0; // Return statement - to exit a function and optionally send a value back to the calling function.
}
// Function definition -This part contains the exact set of instructions executed during the function call.
void display()
{
    printf("hi i am display\n"); // Printing the message - display the text or value on the screen
    
}
