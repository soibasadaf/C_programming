#include <stdio.h>

int main()
{
    if ("s")
    {
        printf("character value is executed, since i is non zero\n");
    }
    if (4.09)
    {
        printf("float value is executed, since 4.09 is non zero\n");
    }
    if (450)
    {
        printf("integer value is executed, since 450 is non zero\n");
    }
    if ("cat")
    {
        printf("character value is executed, since cat is non zero\n");
    }
    if (0)
    {
        printf("zero isn't executed");
    }

    return 0;
}