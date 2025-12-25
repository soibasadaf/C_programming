#include<stdio.h>


void good_morning();//function prototype
void good_afternoon();//function prototype
void good_evening();//function prototype

void good_morning(){
    printf("hey! what's up ? Good Morning\n"); //function body
}

void good_afternoon(){
    printf("hey! what's up ? Good afternoon\n");//function body
}

void good_evening(){
    printf("hey! what's up ? Good evening\n");//function body
}
    
int main(){
    good_morning();//function declaration
    good_afternoon();//function declaration
    good_evening();//function declaration

    return 0;
}
