#include<stdio.h>

int main(){
    //Write a program to print multiplication table of a given number n.
    int n, i;
    printf("enter the value of n : \n");
    scanf("%d",&n);
    printf("the value of n is %d \n",n);
    printf("table of %d \n",n);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d \n",n,i,n*i);
    }

    return 0;
}