#include<stdio.h>


    // Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
    //earth. Consider g = 9.8m/s2.

//function prototype
float force(float);

//function declaration
float force(float mass){
    float gravity=9.8;
    
    return mass*gravity;
}

//main function call
int main(){
    float mass;
    printf("the mass of body in kg is : \n");
    scanf("%.2f",&mass);
    printf("The force of attraction on a body of mass %.2f kg is %.2f N\n",mass, force(mass));
    return 0;
}