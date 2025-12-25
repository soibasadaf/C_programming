#include <stdio.h>

int main()
{
    //‘break’ statement completely exits the loop. 
// ‘continue’ statement skips the particular iteration of the loop.
    int i;
    for (i = 1; i <= 16; i++)
    {
        if (i == 7)
        {
            continue;
        }//skip 7 
        // skip the current iteration!, even if the condition is true
        if (i == 9)
        {
            break; // break the loop now!, even if the condition is true.
        }          //

        printf("i is %d \n", i);
    }
        return 0;
    
}