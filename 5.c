#include<stdio.h>
int main()
{
    int var;
    printf("enter a no. from 1 to 3: ");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
        printf("Good");
        break;

        case 2:
        printf("better");
        break;

        case 3:
        printf("best");
        break;

        default:
        printf("invalid");
        break;
    }
}