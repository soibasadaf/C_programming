
    // int marks[10];
    // marks[0]=59;
    // marks[1]=98;
    // marks[2]=36;
    // marks[3]=75;
    // marks[4]=65;
    // marks[5]=75;
    // marks[6]=83;
    // marks[7]=95;
    // marks[8]=78;
    // marks[9]=72;

    // printf("the marks of student 0 are %d\n",marks[0]);
    // printf("the marks of student 1 are %d\n",marks[1]);
    // printf("the marks of student 2 are %d\n",marks[2]);
    // printf("the marks of student 3 are %d\n",marks[3]);
    // printf("the marks of student 4 are %d\n",marks[4]);
    // printf("the marks of student 5 are %d\n",marks[5]);
    // printf("the marks of student 6 are %d\n",marks[6]);
    // printf("the marks of student 7 are %d\n",marks[7]);
    // printf("the marks of student 8 are %d\n",marks[8]);
    // printf("the marks of student 9 are %d\n",marks[9]);
    
    //all this could be done in a loop
#include<stdio.h>
int main(){

    int marks[10];

    printf("enter the number of students :");
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&marks[i]);
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the marks of student %d are %d\n",i,marks[i]);
    }
    


    return 0;
}