

#include <stdio.h>

int main()
{
    char name[5] = "soiba";
    // we can put string in double quotes in order to avoid cracking knuckles

    for (int i = 0; i < 5; i++)
    {
        printf("%c", name[i]);
    }
    return 0;
}