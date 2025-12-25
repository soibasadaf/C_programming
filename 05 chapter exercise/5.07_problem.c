#include<stdio.h>

int main(){
    int n=25; //n are number of lines we want to print
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){ //j are stars

            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}