#include<stdio.h>
//swap two numbers

void swap(int*,int*);
void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


int main(){
    int a=4,b=6;
    swap(&a,&b); //pass the addresses for swapping
    printf("the values of a %d and b %d \n",a,b);
    return 0;
}