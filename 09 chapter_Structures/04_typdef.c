#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;

    e1.code=238;
    e1.salary=5000;
    strcpy(e1.name,"kashaf");
    printf("data of employee 1 : %d %f %s",e1.code,e1.salary,e1.name);
}