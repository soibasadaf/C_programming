#include<stdio.h>
//Write your own version of strcpy function from <string.h>
int strlen(char str[])
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

void strcopy(char target[], char source[])

{
    for (int i=0;i<strlen(source);i++)
    {
        target[i]=source[i];
    }
    target[strlen(source)]='\0';
}


int main(){
    char source[]="sobi";
    char target[5];
    strcopy(target,source);
    printf("%s %s",source,target);
    return 0;
}