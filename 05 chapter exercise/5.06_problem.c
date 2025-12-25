#include<stdio.h>


    //Write a recursive function to calculate the sum of first ‘n’ natural numbers.
    int sum_natural(int);

    int sum_natural(int n){
        if(n==1){
            return 1;
        }
        return sum_natural(n-1)+n;
//sum of (n)=1+2+3+...+(n-1)+n;
//sum_natural(n)=sum(n-1)+n;

    }
    int main(){
        printf("the sum of first 5 natural numbers is %d",sum_natural(5));
        return 0;
    }
    
