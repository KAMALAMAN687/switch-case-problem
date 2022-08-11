#include<stdio.h>
int main()
{
    int a;
    while(1)
    {
    printf("enter a day no. ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("MONDAY\nIt's your day work hard\n");
        break;

        case 2:
        printf("TUESDAY\nDon't depressed keep motivating yourself\n");
        break;

        case 3:
        printf("WEDNESDAY\nSmile you are under camera survillance\n");
        break;

        case 4:
        printf("THURSDAY\noh!\n nice to see you\n");
        break;

        case 5:
        printf("FRIDAY\nOne day you'ill get success\n");
        break;

        case 6:
        printf("SATURDAY\nit's half day chill\n");
        break;

        case 7:
        printf("SUNDAY\nEnjoy Bro \n today is holiday\n");
        break;

        default:
        printf("no. of days are only 7 please enter a no. b/w 1 to 7 to see interested greetings.\n");
        break;
    }

}  

}