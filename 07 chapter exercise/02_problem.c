#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n : \n");
    scanf("%d",&n);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[n]=n *(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the table of %d X %d is %d\n",n,i+1,arr[i]);
    }
    return 0;
    
}
// int arr[20];
//     for (int i = 0; i < 20; i++)
//     {
//         arr[i]=2 * (i+1);
//     }
//     for (int i = 0; i < 20; i++)
//     {
//         printf("the table of 2 till 20 : %d\n",arr[i]);
//     }