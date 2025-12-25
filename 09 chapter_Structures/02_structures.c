#include<stdio.h>
#include<string.h>

struct employee{

int code;
float salary;
char name[10];

};
int main(){

struct employee facebook[9];

    facebook[0].code=29;
    facebook[1].code=30;
    facebook[2].code=31;

    printf("the value of employee's code : %d\n",facebook[0].code);
    printf("the value of employee's code : %d\n",facebook[1].code);
    printf("the value of employee's code : %d\n",facebook[2].code);

    facebook[0].salary=4500;
    facebook[1].salary=3000;
    facebook[2].salary=3500;

    printf("the value of employee's salary : %.2f\n",facebook[0].salary);
    printf("the value of employee's salary : %.2f\n",facebook[1].salary);
    printf("the value of employee's salary : %.2f\n",facebook[2].salary);

    strcpy(facebook[0].name, "bob");
    strcpy(facebook[1].name, "carry");
    strcpy(facebook[2].name, "harry");

    printf("the value of employee's name : %s\n",facebook[0].name);
    printf("the value of employee's name : %s\n",facebook[1].name);
    printf("the value of employee's name : %s\n",facebook[2].name);

    

    return 0;
}