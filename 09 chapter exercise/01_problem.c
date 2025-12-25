#include<stdio.h>
#include<string.h>
struct vector{
    int i;
    int j;
};
int main(){
    struct vector v = {5,6};
    printf("the vector is %d i + %d j",v.i,v.j);
    return 0;
}