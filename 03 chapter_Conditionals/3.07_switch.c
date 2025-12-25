#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a :",a);
    scanf("%d",&a);
    //in switch statements the whenever the values are matched it runs all the commands which are next.
    //there come the break; we use break to terminate the cases when the condition matches.
    switch(a){
        case 1:
            printf("you are inside 1\n");
            break;
        case 2:
            printf("you are inside 2\n");
            break;
        case 3:
            printf("you are inside 3\n");
            break;
        case 4:
            printf("you are inside 4\n");
            break;
        case 5:
            printf("you are inside 5\n");
            break;
        default:
            printf("you are inside default\n");
    }
    return 0;
}