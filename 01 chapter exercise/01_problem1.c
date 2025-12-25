//1. Write a C program to calculate area of a rectangle: 
//a. Using hard coded inputs. 
//b. Using inputs supplied by the user. 
#include<stdio.h>

int main(){
    //a.
    //int length=2;
    //int breadth=5;
    //b.

    int length,breadth;
    printf("enter value for length:\n");
    scanf("%d", &length);
    printf("enter value for breadth:\n");
    scanf("%d", &breadth);
    int area_of_rect = length*breadth;
    printf("the area of rectangle is %d", area_of_rect);
    return 0;
}

