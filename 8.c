#include<stdio.h>
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    switch(a>0)
    {
        case 0:
        printf("opposite no. is %d",-a);
        break;


        case 1:
        printf("opposite no. is %d",-a );
        break;
    }
}