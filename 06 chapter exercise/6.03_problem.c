#include<stdio.h>

void chng_val_2_30(int*); //function prototype

void chng_val_2_30(int* a){ //function definition //declare variable a
    *a = *a * 30; //change value to 10 times
}

int main(){
    int val=30; //declare argument in variable named val
    printf("the value of int is %d \n",val);
    chng_val_2_30(&val); //function call inside main //change the value from its address
    printf("the value of int thirty times is %d \n",val);
    return 0;
}
