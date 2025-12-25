#include<stdio.h>
int main(){
    int i=5 ,a=1;
    
    do{
        printf("%d * %d = %d \n",i,a,i*a);
        a++;
    }
    while(a<=10);
    return 0;
}