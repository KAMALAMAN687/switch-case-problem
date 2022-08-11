#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("january\n");
        printf("days in january is 31");
        break;

        case 2:
        printf("february\n");
        printf("no. of days in february is 28/29");
        break;

        case 3:
        printf("march\n");
        printf("no. of days in march is 31");
        break;

        case 4:
        printf("April\n");
        printf("no. of days in April is 30");
        break;

        case 5:
        printf("May\n");
        printf("no. of days in May is 31");
        break;

        case 6:
        printf("June\n");
        printf("no. of days in June is 30");
        break;

        case 7:
        printf("July\n");
        printf("no. of days in July is 31");
        break;

        case 8:
        printf("August\n");
        printf("no. of days in August is 31");
        break;

        case 9:
        printf("September\n");
        printf("no. of days in September is 30");
        break;

        case 10:
        printf("October\n");
        printf("no. of days in October is 31");
        break;

        case 11:
        printf("NOVEMBER\n");
        printf("no. of days in November is 30");
        break;

        case 12:
        printf("December\n");
        printf("no. of days in December is 31");
        break;

    }
    return 0;

}