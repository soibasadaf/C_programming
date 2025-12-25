#include<stdio.h>
//Write a program to print multiplication table of 10 in reversed order.
int main(){
    int n=10,i;
    printf("table of 10 in reverse order : \n");
    for(i=10;i;i--){
        printf(" %d * %d = %d \n",n,i,n*i);
    }
    return 0;
}