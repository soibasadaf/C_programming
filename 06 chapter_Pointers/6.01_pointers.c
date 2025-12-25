#include<stdio.h>
int main(){
    int i=78;
    int* j=&i;
    int k =32;
     //here * is important it means that the value of j is pointing towards i 
    printf("the address of i is %p \n",&i); //&i returns the address of i
    printf("the address of i is %p \n",j); //the address of i now stored in j
    printf("the address of i is %u \n",&i); //%u is unsigned integer
    printf("the address of k is %u \n",&k); //%u is unsigned integer
    int l=78;
    printf("the address at l is %p \n",&l); 
    int* m=&l;
    
    printf("the value at address l or &l is : %d", *(&l));
    return 0;
}