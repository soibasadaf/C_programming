#include<stdio.h>
#include<string.h>
struct employee
    {
        int code;
        float salary;
        char name[10];
    };
int main(){
    struct employee e1,e2,e3;
    e1.code =302;
    strcpy(e1.name, "bob");
    e1.salary = 40;
    printf("%d %.2f %s", e1.code,e1.salary,e1.name);
    return 0;
}