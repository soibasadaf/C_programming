#include<stdio.h>

int main(){
    int marks[]={12,24,54,65};

    int* ptr = &marks[0]; //is same as int* ptr = marks (give array name)
    
    for (int i = 0; i < 4; i++)
    {
        printf("marks : %d \n",marks[i]);
    
        
    }
    for (int i = 0; i < 4; i++)
    {
        printf("the marks at index %d is %d\n",i,*ptr);
        ptr++;
    }
    
    
    
    return 0;
}