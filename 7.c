#include<stdio.h>
int main()
{
    int a;
    double b;
    printf("enter a electricity unit charge : ");
    scanf("%d",&a);
    switch(a)
    {
        case 1 ... 50:
        b=0.50*a;
        printf("total electricity bill is %lf",b);
        break;

        case 51 ... 150:
        b=0.75*a;
        printf("total electricity bill is %lf",b);
        break;

        case 151 ... 250:
        b=1.20*a;
        printf("total electricity bill is %lf",b);
        break;

        default:
        b=1.50*a;
        printf("total electricity bill is %lf",b);
        break;

    }
}