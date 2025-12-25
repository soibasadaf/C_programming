#include<stdio.h>

typedef struct compnum{
    int real;
    int imag;

}complex;
int main(){
    complex c={56,32};
    
    printf("the complex number using structures is %d + %d i",c.real,c.imag);
    return 0;
}