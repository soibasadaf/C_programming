#include <stdio.h>

int main()
{
    int age = 13;
    if (age >= 18)
    {
        printf("you can caste a vote, you age is %d", age);
    }
    else
    {
        printf("since your age is %d, you are not eligible to caste a vote", age);
    }
    return 0;
}