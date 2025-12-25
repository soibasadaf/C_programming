//2. Calculate the area of a circle and modify the same program to calculate the 
//volume of a cylinder given its radius and height. 
#include<stdio.h>

int main(){
    int r,h;
    printf("enter the value of radius:");
    scanf("%d",&r);
    printf("enter the value of height:");
    scanf("%d",&h);
    printf("the volume of cylinder with radius %d and height %d is %f",r,h,3.14*r*r*h);
    //int r;
    //printf("enter the value of radius:");
    //scanf("%d",&r);
   // int r =5;

    //printf("the area of circle with radius %d is %f", r, 3.14*r*r);
    return 0;
}