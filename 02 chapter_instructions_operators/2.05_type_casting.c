#include<stdio.h>

int main(){
    int a = 8;
    int b = 3.45;
    // convert the value of a into int b, output should be a = 3
    a = (int) b;
    printf("value of a : %d \n",a);
    return 0;
}