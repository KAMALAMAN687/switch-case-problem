#include<stdio.h>
int main()
{
    int b,c;
    char a;
    
    while(1)
    {
        printf("\na. Addition");
        printf("\nb. Subtraction");
        printf("\nc. Multiplication");
        printf("\nd. Division");
        printf("\ne. Exit");
        printf("\nEnter your choice : ");
        scanf("%c",&a);
    switch(a)
    {
        case 97:
        printf("choice chosen \"%c\" \n ",a);
        printf("enter two no. : ");
        scanf("%d%d",&a,&b);
        printf("sum of entered no. is %d",a+b);
        break;

        case 98:
        printf("choice chosen \"%c\" \n ",a);
        printf("enter two no. : ");
        scanf("%d%d",&a,&b);
        printf("difference of entered no. is %d",a-b);
        break;

        case 99:
        printf("choice chosen \"%c\" \n ",a);
        printf("enter two no. : ");
        scanf("%d%d",&a,&b);
        printf("multiplication of entered no. is %d",a*b);
        break;

        case 100:
        printf("choice chosen \"%c\" \n ",a);
        printf("enter two no. : ");
        scanf("%d%d",&a,&b);
        printf("quotient of entered no. is %d",a/b);
        break;

        case 101:
        break;
    }
    if(a==101)
    break;

    }//end of while loop

}