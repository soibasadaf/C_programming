#include <stdio.h>

int main()
{
    int eng, sci, math;
    printf("the marks obtained by students are\n");
    scanf("%d %d %d", &eng, &sci, &math);
    
    int total = eng + sci + math;
    printf("the total marks otained are: %d\n",total);

    if (eng<=33 || sci<=33 || math<=33){
        printf("failed due to less marks scored individually");
    }
    

    float percentage = ( (float) total / 300.0) * 100;
    printf("the total percentage obtained are : %f\n",percentage);
    if (percentage >= 40)
    {
        printf("the student has passed the exam\n");
    }
    else
    {
        printf("the student failed the exam\n");
    }
    return 0;
}