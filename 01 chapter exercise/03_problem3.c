//3. Write a program to convert Celsius (Centigrade degrees temperature to 
//Fahrenheit).
#include<stdio.h>

int main(){
    int cel, f;
    printf("temperature in celsius:");
    scanf("%d",&cel);
    f=(cel*9/5)+32;
    printf("temperature %d celcius converted into fahrenheit is %d", cel, f);
    return 0;
}