
// write a program to print all the occurance of a letter in given text.
#include <stdio.h>
#include <string.h>
// Write a program to decrypt the string encrypted using encrypt function in
// problem 6.
int main()
{
    char c = 'f';
    int count=0;
    char str[] = "mfbwf!b!nfttbhf-!cfffffffq";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c){
        count++;   
        }
    }
    printf("%d", count);

    return 0;
}