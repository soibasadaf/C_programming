#include <stdio.h>

int main()
{
    int a = 0;

    do
    {
        printf("the value of a: %d \n", a);//first this line will be executed.
        // code
        a++; //value of i will increment;

    } while (a < 5);//condition check
    

    return 0;
}