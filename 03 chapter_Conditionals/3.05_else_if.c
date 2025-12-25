#include <stdio.h>

int main()
{
    //this is if else if else ladder.
    int age = 36;
    if (age > 55)
    {
        printf("you can drive and you are a senior citizen");
    }
    // when if condition satisfies or it is true, 
    //the program do not check further and return to 0,
    // which means else if and else will be ignored.
    else if (age>35){
        printf("you are an elderly\n");
        printf("and yes you can drive\n");
    }
    else if (age > 18)
    {
        printf("you can drive");
    }
    else
    {
        printf("you cannot drive");
    }
    return 0;
}