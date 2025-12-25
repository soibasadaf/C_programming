#include<stdio.h>

int main(){
 
    int i = 8; //take i any integer, store its value 
    int *j; // point the value of i to j
    j = &i;  // j is the adress of i, no doubt
    printf("address of i= %u\n",&i); //value of i is stored in &i
    printf("address of i= %u\n",j); //make a variable named j which stores the value of &i, now the address of i stored in j
    printf("address of j= %u\n",&j); //
    printf("value of i= %d\n",i); // value of i, i hoti hai
    printf("value of i= %d\n",*(&i)); //or value of i, i ke adress pe konsi value hai
    printf("value of i= %d\n",*j);  //points the value of i to j, to i ki value print hogi
    return 0;
}