#include<stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++); 

//dry run- first of all, the program took 4 as input, then a prints as 4
// then ++a prints which increment 4 by 1, so the output is now 5
// then a++ the value of is incremented at first place but it did not update. 
// butttt but but
// the compilor ran it backwaaards yeeees 
// so first of all ++a , the value is incremented 6
// then ++a, the value is incremented but not updated 6


    return 0;
}