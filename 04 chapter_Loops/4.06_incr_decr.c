#include<stdio.h>

int main(){
    int i=3;
    printf("the value of i is %d \n",i);

    i+=3;
    printf("the value of i is %d \n",i);
    
    //i++;
    printf("the value of i is %d \n",i++); //value 7 hogyi hai lekin print 6 hoga, value is increased but not updated.
    
    printf("the value of i is %d \n",i);
    
    //++i;
    printf("the value of i is %d \n",++i);
    return 0;
}