#include<stdio.h>
//this is a function
//function prototype
int sum(int,int);

//function definition
int sum (int x,int y){
    printf("the sum is %d \n", x+y);
    return x+y;
}

int main(){
    int a=2;
    int b=23;
    // int c=a+b;
    // printf("the value of c is = %d \n",c);
    //compiler stops running the main 
    //jumps to sum function
    sum(a,b);

    int a1=23;
    int b1=22;
    // int c1=a1+b1;
    // printf("the value of c1 is = %d \n",c1);

    //compiler stops running the main 
    //jumps to sum function
    //everytime compiler approaches a function other than 
    //main, the function start running.
    sum(a1,b1);


    int a2=12;
    int b2=73;
    // int c2=a2+b2;
    // printf("the value of c2 is = %d \n",c2);
    sum(a2,b2);

    return 0;
}

#include<stdio.h>

    int subtract(int,int); //function prototype

    int subtract(int a,int b){
        // printf("the subtraction of two numbers %d and %d is : %d\n",a,b,a-b); agar me yhan print na karwana chahun
        return a-b;
    }

    int main(){
        int x=56;
        int y=45;
        subtract(x,y);
        printf("subtraction performed %d - %d = %d\n",x,y,subtract(x,y)); //function call-kripya subtract function ko call karen
        return 0;

    }

    //make a function to multiply three numbers _multiplication  function

    //function prototype