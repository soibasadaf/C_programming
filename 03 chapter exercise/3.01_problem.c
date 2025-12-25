#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}
// what happened here :- we initialized int a with 10
//but inside if condition we used assignment operator, to assign the value 11 to a,
//now the value of 1 is 11
//so if a=11 became true,
//i am 11 will be printed.