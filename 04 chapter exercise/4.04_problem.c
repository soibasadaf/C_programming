#include <stdio.h>
// write a program to print first 10 natural numbers using for and do while loop.

// #include <stdio.h>

// int main()
// {
    
//     int sum = 0;
//     for ( int i=1;i <= 10; i++)
        
//     {
//         sum+=i;
//         printf("sum of first 10 natural numbers : %d\n", sum);
//     }
//     return 0;
// }

//using do while

#include<stdio.h>

int main(){
    int i=1,sum=0;
    do
    {
        printf("the value of sum is : %d \n",sum);
        sum+=i;
        i++;
    } while (i<=10);
    
    return 0;
}