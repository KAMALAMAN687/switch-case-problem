#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant;
    printf("enter a,b,c in quadratic equation\n");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    printf("%f\n",discriminant);
    switch(discriminant>=0)
    {
        case 1:
        if(discriminant==0)
        {
        printf("roots are %f and %f",-b/(2*a),-b/(2*a));
        }
        else
       {

        printf("roots are %f an %f",-b/(2*a)+sqrt(discriminant)/(2*a),-b/(2*a)-sqrt(discriminant)/(2*a));
       }
        break;

        case 0:
        printf("roots are %f+%fi and %f-%fi",-b/2*a,sqrt(4*a*c-b*b)/2*a,-b/2*a,sqrt(4*a*c-b*b)/2*a);
        break;
    }
     return 0;


}