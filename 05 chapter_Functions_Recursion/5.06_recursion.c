#include<stdio.h>
//function declaration wale case me main function se call start nahi karte 
    // step 1 _ factorial decaration
    int factorial(int);
    //factorial(4)=4 * 3* 2* 1
    //factorial(3)= 3* 2* 1
    //factorial(2)=2* 1
    //factorial(1)= 1
    
    //generalizing factorial for n numbers;
    //factorial(n) = 1* 2* 3* 4* ... * (n-1) * n
    //factorial(n)= 1 * 2 * 3* 4* 5*... *(n-1)

    // see the pattern : factorial(n) is nothing but factorial(n-1) *n
    
    //step 2 _ function body 

    int factorial(int n){
        if(n==1 || n==0){  // base condition make sure the program ends, otherwise it will run on loop infinitely.
            return 1;      //The condition in a recursive function that stops further recursion is called 
//the base case.
        }
        //factorial(n)=factorial(n-1) * n

        //return function body calculations

        return factorial(n-1)*n;
    }
    
    // step 3 _ main function call, function declaration wale case me call main function lastly

    int main(){
        int a=9;
        printf("the value of factorial %d is %d", a, factorial(a));
        return 0;
    }

// find factorial of a number :
/*
#include<stdio.h>
    int factorial(int);
    int factorial(int n){
        if(n==1 || n==0){
            return 1;
        }
        return factorial(n-1)*n;
    }
    int main(){
        int a=5;
        printf("the value of factorial %d is %d, a, factorial(a)");
        return 0;
    }
        yupp!
*/

//sometimes due to weak eyesight of the programmer, the recursive function lacks to meet the base condition, results in memory error and stack overflow.
