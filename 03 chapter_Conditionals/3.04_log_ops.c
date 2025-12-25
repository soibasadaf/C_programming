#include <stdio.h>

int main()
{
    int a = 0, b = 1;
    printf("the value of a and b is %d \n", a && b);
    printf("the value of a or b is %d \n", a || b);
    // har ke jeetne wale ko bazigar khete hain or jo zero ko one or one ko zero bna do use not operator kehte hain
    printf("the value of not(a) is %d", !a);
    // method 1
    if (a && b)
    {
        printf("both are true");
    }
    // method 2 - also called nested if
    if (a)
    {
        if (b)
        {
            printf("both are true");
        }
    }

    return 0;
}