#include<stdio.h>

int main(){
    char name[] = {'s','o','i','b','a','\0'};
    //string array is terminated with null character
    //null character
    for (int i =0;i<5;i++){
        printf("character is %c \n",name[i]);
    }
    return 0;
}