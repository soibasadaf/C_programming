#include<stdio.h>
int main(){
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        arr[i]=2 * (i+1);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("the table of 2 till 20 : %d\n",arr[i]);
    }
    return 0;
    
    
}