#include <stdio.h>
int count_strlen(char str[])
{
    int i = 0, count;
    char ch = str[i];
    while (ch != '\0')
    {
        ch = str[i];
        i++;
    }
    count = i - 1;
    return count;
}
int main()
{
    // char str[]="soiba sadaf";
    // int i=0,count;
    // char ch =str[i];
    // while(ch!='\0'){
    //     ch = str[i];
    //     i++;
    // }
    // count = i-1;
    // printf("%d",i);
    // return 0;

    char str[] = "soiba sadaf";

    printf("%d", count_strlen(str));
    return 0;
}