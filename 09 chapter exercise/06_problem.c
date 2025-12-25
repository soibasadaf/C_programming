#include<stdio.h>

typedef struct date{
    int dd;
    int mm;
    int yyyy;
}dt;

int compare(dt d1, dt d2)

{
    if ((d1.yyyy==d2.yyyy)&&(d1.mm==d2.mm)&&(d1.dd==d2.dd)){
    printf("the date is actually same\n");
    return 0;
}
    else if(d1.yyyy>d2.yyyy)
{
    printf("date 1 is more of past in terms of year does it even make sense? huhhaha\n");
    return 1;
}
    else if(d1.yyyy<d2.yyyy)
{
    printf("date 2 is less of past in terms of year does it even make sense? huhhaha\n");
    return -1;
}
    else if(d1.mm>d2.mm)
{
    printf("date 1 is more of past in terms of months does it even make sense? huhhaha\n");
    return 1;
}
    else if(d1.mm<d2.mm)
{
    printf("date 2 is less of past in terms of months does it even make sense? huhhaha\n");
    return -1;
}
    else if(d1.dd>d2.dd)
{
    printf("date 1 is more of past in terms of days does it even make sense? huhhaha\n");
    return 1;
}
    else if(d1.dd<d2.dd)
{
    printf("date 2 is less of past in terms of days does it even make sense? huhhaha\n");
    return -1;
}
}


int main(){
    dt d1={15,4,2006};
    dt d2={15,4,2005};
    printf("%d",compare(d1,d2));
    return 0;
}