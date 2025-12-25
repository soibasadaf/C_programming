//Write a program to illustrate the use of arrow operator → in C. 
#include<stdio.h>

#include<stdio.h>

typedef struct emp{
    int age;
    float salary;
}employee;

int main(){
    employee e1;
    employee* ptr =&e1;
    //(*ptr).age=46;
    //(*ptr).salary=3500;
    ptr->age=46;
    ptr->salary=3500;
    printf("the value of age is %d\n",ptr->age);
    printf("the value of salary is %f\n",ptr->salary);
    return 0;
}