#include<stdio.h>
 // Write a program using function to find average of three numbers.

float average(int a,int b,int c); //function prototype

float average(int a, int b, int c){ //function definition
    return (a+b+c)/3.0;
}
int main(){  //main function/function body
    int a, b, c;

    printf("enter the numbers to take average of :\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("the average of three numbers %d %d and %d is %f \n ",a,b,c,average(a,b,c));
    return 0;
}