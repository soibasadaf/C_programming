#include<stdio.h>

int sum(int,int); //function prototype

int sum(int a,int b){ //function declaration
    a=6; //sum finction cannot change value of x using a
    return a+b;
}


int main(){ //function body
    int x=1,y=6;
    printf("the sum of a and b is %d \n",sum(x,y));
    printf("the value of a is %d \n",x);
    return 0;
}
//this function can never change the values of x and y, because the copy is running throughout the program.