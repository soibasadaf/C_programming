#include<stdio.h>

int main(){
    //int and int → int 
    int a =14;
    int b =4;
    int c=a/b;
    // the value 14 divided by 4 is 3.5, but in c when we divide integer with an integer it gives an integer, .5 is dropped in output.
    printf("%d\n",c);

    //int and float → float 
    float d=20;
    int e =2;
    float f=d/e;
    printf("%f\n",f);
    
    //float and float → float
    float g=32;
    float h =2;
    float i=g/h;
    printf("%f",i);
    return 0;
}