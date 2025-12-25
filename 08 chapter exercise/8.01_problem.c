#include <stdio.h>

// int main(){
//     char str[6];
//     scanf("%s",str);
//     printf("%s",str);
//     return 0;
// }

int main()
{
    char str[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &str[i]);
        fflush(stdin); //do not include enter as character
    }
    str[5] = '\0';
    printf("%s", str);
    return 0;
}