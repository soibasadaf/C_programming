#include<stdio.h>

int main(){
    //type declaration instruction
    int a=2,b=3;
    float c=4.5;
   
    //In C, you can only declare each variable once within the same scope.
    //this is redeclaring the variables a b and c, int a=2,b=3,c=4.5;
    float sum = a+c+b;
    printf("sum is %f",sum);
    return 0;
}
//in c variables are immutable, which means the same variables name cannot be assigned to any any value, for simplicity each variable has has a unique value

