#include <stdio.h>

int main()
{
    /*Quick Quiz: Write a program to find grade of a student given his marks based on below:
        90 – 100 => A
        80 – 90 => B
        70 – 80 => C
        60 – 70 => D
        50 – 60 => E
        <50
        => F */
    char grade;
    int marks;
    printf("enter the numbers you want to grade :");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 90)
    {
        printf("the grade is A");
    }

    else if (marks < 90 && marks >= 80)
    {
        printf("the grade is B");
    }

    else if (marks < 80 && marks >= 70)
    {
        printf("the grade is C");
    }

    else if (marks < 70 && marks >= 60)
    {
        printf("the grade is D");
    }

    else if (marks < 60 && marks >= 50)
    {
        printf("the grade is E");
    }

    else
        
        {
            printf("grade = fail");
        }

    return 0;
}