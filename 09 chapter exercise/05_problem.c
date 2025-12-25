// display 5 complex number using tyedef and functions take input from the user.
#include <stdio.h>

typedef struct c
{
    int real;
    int imag;
} complex;

void display(complex c)
{
    printf("the complex number is %d + %d i\n", c.real, c.imag);
}

int main()
{
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {

        printf("enter real :  \n");
        scanf("%d", &(carr[i]).real);
        printf("enter imaginary :  \n");
        scanf("%d", &(carr[i]).imag);
        display(carr[i]);
    }
    return 0;
}