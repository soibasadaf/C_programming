
// write a program to print all the occurance of a letter in given text.
#include <stdio.h>
#include <string.h>
// Write a program to decrypt the string encrypted using encrypt function in
// problem 6.
int main()
{
    char c = 'p';
    int contains=0;
    char str[] = "opportunity";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c){
        contains=1;
        break;   
        }
    }
    if(contains){
        printf("yes, it contains\n");
    }
    else{
        printf("it does not contains \n");
    }
    

    return 0;
}