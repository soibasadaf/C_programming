#include<stdio.h>

int main(){
    int eng, sci, math;
    printf("the marks obtained in english : \n");
    scanf("%d",&eng);
    printf("the marks obtained in science : \n");
    scanf("%d",&sci);
    printf("the marks obtained in mathematics : \n");
    scanf("%d",&math);

    printf("the marks obtained are %d %d %d \n",eng, sci, math);

    int total = eng +sci +math;
    printf("total marks obtained are : %d \n",total);
    
    if (eng<=33 || sci<=33 || math<=33){
        printf("individual marks are less, thus the student failed.");
    }
    
    else if((total/3)<40){
        printf("you are failed.");
    }
    else{
        printf("you are passed");
    }
    return 0;
}