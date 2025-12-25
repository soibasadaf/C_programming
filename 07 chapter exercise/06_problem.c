#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n6, n7;
    scanf("%d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5,&n6, &n7);
    int arr[7][10];

    int tab[] = {n1, n2, n3, n4, n5, n6, n7};
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = tab[i] * (j + 1);
        }
    }
    printf("the table of 2, 3, 4, 5, 6, 7, 8 are :\n");
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\n", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}