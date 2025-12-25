//4. Write a program to calculate simple interest for a set of values representing      
//principal, number of years and rate of interest.
#include<stdio.h>

int main(){
    int p,r,t,si;
    printf("Enter the values for p, r, t:");
    scanf("%d %d %d", &p, &r, &t);
    si=(p*r*t)/100;
    printf("the simple interest is:%d",si);
    return 0;
}