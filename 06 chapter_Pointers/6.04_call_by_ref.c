#include<stdio.h>
// sum function change the value of arguments by approaching them through their addresses.
int sum(int*,int*); //function prototype

int sum(int* a,int* b){ //function declaration
    *a=6;
    return *a+*b;
}


int main(){ //function body
    int x=1,y=6;
    printf("the sum of 1 and 6 is %d \n",sum(&x,&y));
    printf("the value of x is %d\n",x);
    return 0;
}
/*Here the address of the variables is passed to the function as arguments. 
Now since the addresses are passed to the function, the function can now modify the 
value of a variable in calling function using * and & operators.
*/
//here sum function asked for call by reference, it asked for the addresses of x and y, the function goes to the adresses and change their values from the root.

#include<stdio.h>

int sum(int*,int*);

int sum(int* a,int* b){
    *a=50;
    return *a+*b;
}

int main(){
    int x=30,y=60;
    printf("the sum of a & b is : %d \n",sum(&x,&y));
    printf("the value of a is %d \n",x);
    printf("the value of a is %d \n",y);
    return 0;
}