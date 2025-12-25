#include<stdio.h>

int main(){
    int a=5; // value of a declared 5
    int *ptr=&a; //the address of a got stored in ptr
    printf("the address of a is %u \n",&a);
    printf("the address of a is %u \n", ptr);
    ptr++; //ptr is incremented by 1, ptr gets updated.
    printf("the value of ptr is %u \n", ptr);
    //the address got updated by the number of bytes the architecture takes to store an integer.
    
    //for character
    char c=60;
    int *ptr1=&a;
    printf("the address of c is %u \n",&c);
    printf("the address of c is %u \n",ptr1);
    ptr++; //increment the value by 1
    printf("the address of character is updated, new address is %u \n",ptr1);

    return 0;
}