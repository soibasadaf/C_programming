#include<stdio.h>
#include<string.h>
void show(struct employee); // function prototype 
void show(struct employee){
    int* age;
    float* salary;
    char* name[10];
}
int main(){
    e1.age=45;
    e1.salary=3000;
    strcpy(e1.name,"xyz");

    ptr=&e1;

    printf("age of employee : %d\n",ptr->age);
    printf("salary of employee : %f\n",ptr->salary);
    printf("name of employee : %s\n",ptr->name);
    return 0;
}