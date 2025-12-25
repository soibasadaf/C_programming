// // Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
// // The vectors must be two–dimensional.
// #include<stdio.h>
// #include<string.h>

// typedef V{
//     int i;
//     int j;
// } Vec;

// Vec sumVector(Vec v1, Vec v2){
//     Vec v3={v1.i + v2.i,v1.j + v2.j};
//     return v3;
// }

// int main(){
//     Vec v1 ={4,5};
//     Vec v2 ={3,8};
//     Vec v3 = sumVector(v1,v2);
//     printf("sum of two vectors v1 and v2 is %di + %d j", v3.i,v3.j);
//     return 0;
// }

// #include<stdio.h>

// V{
//     int i;
//     int j;
// };

// V sumVector(V v1, V v2){
//     V v3={v1.i+v2.i,v1.j+v2.j};
//     return v3;
// }
// int main(){
//     V v1={7,9};
//     V v2={2,4};
//     V v3=sumVector(v1,v2);
//     printf("the value of vector v3 is %d i + %d j",v3.i,v3.j);
//     return 0;
// }
#include <stdio.h>

typedef struct vector{
    int i;
    int j;
}V;
V sumVector(V v1, V v2)
{
    V v3 = {v1.i + v2.i, v1.j + v2.j};
};
int main(){
    V v1={6,4};
    V v2={4,4};
    V v3 = sumVector(v1,v2);
    printf("the value of vector is : %di + %dj",v3.i,v3.j);
    return 0;
}
