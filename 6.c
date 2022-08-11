#include<stdio.h>
int main()
{
    int year;
    printf("enter a year : ");
    scanf("%d",&year);
    switch(year%100)
    {
        case 0:
        if(year%400==0)
        {
            printf("leap year");
        }
        else
        {
            printf("not a leap year");
        }
        break;

        case 1 ... 99:
        if(year%4==0)
        {
            printf("leap year");
        }
        else
        {
            printf("not a leap year");
        }
        break;



    }
    return 0;
}