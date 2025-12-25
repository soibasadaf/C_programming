#include<stdio.h>
#include <string.h>
struct employee{
    int age;
    float salary;
    char name[5];
};

int main(){
    struct employee e1;
    e1.age=42;
    e1.salary=4000;
    strcpy(e1.name,"soha");
    struct employee *ptr; //derefrence, get structure via pointer, structure matlab address.
    struct employee *ptr1; //derefrence, get structure via pointer, structure matlab address.
    struct employee *ptr2;//derefrence, get structure via pointer, structure matlab address.
    ptr=&e1;
    ptr1=&e1;
    ptr2=&e1;
    printf("%d\n",(*ptr).age); //could do e1.age but pointing via pointers * - asterik get value of ptr
    printf("%f\n",(*ptr1).salary); //could do e1.age but pointing via pointers * - asterik get value of ptr
    printf("%f\n",ptr->salary); //same as (*ptr).whatsoever
    return 0;
}