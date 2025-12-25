// Write a program to print the address of a variable. Use this address to get the
//  value of the variable.
#include <stdio.h>

int main()
{
    int a = 89;
    printf("the value of a is %d \n", a);
    int *b;
    b = &a;
    printf("the address of a saved in b (ascii) is %p \n", b);
    printf("the address of a saved in b (integer) is %u \n", b);

    // address to get value
    printf("the value of a saved in *b is %d", *b);
    return 0;
}