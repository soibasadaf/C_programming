#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("soiba.txt", "r");
    if (ptr == NULL)
    {
        printf("File not found!");
        return 0;
    }

    char word[5];
    fscanf(ptr, "%s", &word);
    printf("the value of char is %s \n", word);
    fscanf(ptr, "%s", &word);
    printf("the value of char is %s \n", word);
    return 0;
}