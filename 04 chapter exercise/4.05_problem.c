// Write a program to calculate the sum of the numbers occurring in the 
// multiplication table of 8. (consider 8 x 1 to 8 x 10)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    
        //initialize random number generator
        srand(time(0));

        //generate random number between 1-100
        int randomnumber=(rand()%100)+1;
        int no_of_guesses=0;
        int guessed_number;

        //print random number
        //printf"Random Number: %d\n", randomNumber);

        do{
            printf("guess the number : ");
            scanf("%d",&guessed_number);
            if(guessed_number>randomnumber){
                printf("lower number please! \n");

            }
            else if(guessed_number<randomnumber){
                printf("higher number please! \n");
            }
            else{
                printf("you got it!\n");
            }
            no_of_guesses++;

         } while(guessed_number!=randomnumber);
    
    printf("you guessed the number in %d guesses",no_of_guesses);
    return 0;
    }
//is khel ki aadat lag sakti hai kripya, zimmedari se khelen! :)