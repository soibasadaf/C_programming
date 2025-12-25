#include<stdio.h>

//Write a function to convert Celsius temperature into Fahrenheit.
//fahrenheit = (celsius * 9 / 5) + 32

float cel2fah(float); //function prototype

float cel2fah(float celcius){
    return ((9*celcius)/5)+32;
}

int main(){
    float celcius=32;
    printf("celcius to fahrenhiet : %.3f to %.3f",celcius,cel2fah(celcius));
    return 0;
}

    
