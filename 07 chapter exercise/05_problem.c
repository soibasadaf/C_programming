//print tables of 2 7 and 9 using arrays
#include<stdio.h>
int main(){
    int arr[3][10];
    int mul[]={2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j]=mul[i]*(j+1);
        }
    }
    printf("table of 2, 7, 9 :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\n",arr[i][j]);
        }
    printf("\n");
    }
    
    return 0;
}

// #include<stdio.h>

// int main(){
//     int arr[7][10];
    
//     int tab[]={2, 3, 4, 5, 6, 7, 8};
//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             arr[i][j] = tab[i]*(j+1);
//         }
    
//     }
// printf("the table of 2, 3, 4, 5, 6, 7, 8 are :\n");   
//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             printf("%d\n",arr[i][j]);
           
//         }
//     printf("\n");    
//     }
//     return 0;
// }