#include<stdio.h>


int sum (int a, int b); // function prototype - we give this sum a two integers parameters and it return a n int

    //function definition
//body of the sum, the calcution is done here
int sum(int a, int b){
    int c;
    c=a+b;
    return c; //c is calculated and the value returns
}
int main(){ //main function - the program starts to execute from here.
    int d=sum(2,3);
    printf("the sum is %d",d);
    return 0; //The returned value (5) is stored in variable d.
}