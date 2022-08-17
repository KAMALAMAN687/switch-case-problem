#include<stdio.h>
#include<stdlib.h>
int main()
{
    int f,g,h;
    char x;
    while(1)
    {
    printf("a. check wheather a givven set of three numbers are length of an isocelous triangle or not\n");
    printf("b. check wheather a given set of three nummbers are length of sides of a right angled triangle or not \n");
    printf("c. check wheather a given set of three numbers are equilateral triangle or not \n");
    printf("d. exit\n");
    printf("choose option : ");
    scanf("%c",&x);
    switch(x)
    {
        case 97:
        printf("enter three numbers: ");
        scanf("%d%d%d",&f,&g,&h);
        if(f+g>h&&g+h>f&&f+h>g)
        {
            if(f==g||g==h||h==f)
            {
                printf("yes, it's a isocelous triangle");
            }
            else
            printf("no it's not a isocelous triangle\ntry choosing different options.");

        }
        else
        printf("it's not a sides of any triangle");
        break;

        case 98:
        printf("enter three numbers: ");
        scanf("%d%d%d",&f,&g,&h);
        if(f+g>h&&g+h>f&&f+h>g)
        {
            if(f*f+g*g==h*h||g*g+h*h==f*f||h*h+f*f==g*g)
            {
                printf("yes, it's a sides of a right angled triangle");
            }
            else
            printf("no it's not a right angled triangle\ntry choosing different options.");

        }
        else
        printf("it's not a sides of any triangle");
        break;

        case 99:
        printf("enter three numbers: ");
        scanf("%d%d%d",&f,&g,&h);
        if(f+g>h&&g+h>f&&f+h>g)
        {
            if(f==g&&g==h&&h==f)
            {
                printf("yes, it's a side of equilateral triangle\n");
            }
            else
            printf("no it's not a equilateral triangle\ntry choosing different options.\n");

        }
        else
        printf("it's not a sides of any triangle");
        break; 

        case 100:
        exit(0);
        
        
        


    }

    }
    return 0;
}
