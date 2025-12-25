#include<stdio.h>

int main(){
    int i=34;
    int* ptr1=&i;
    int** ptr2=&ptr1;
    printf("the value of i is %d\n",i);
    printf("the address of i is %p\n",&i);
    printf("the value of i using pointer is %d\n",*ptr1);
    printf("the value of i using pointer to pointer is %d\n",**ptr2);
    return 0;
}