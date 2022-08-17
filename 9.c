#include<stdio.h>
int main()
{
    int a;
    printf("enter a even no. to print its upper nearest odd number : ");
    scanf("%d",&a);
    switch(a%2)
    {
        case  0:
        printf("upper nearest odd number is %d",a+1);
        break;

        case 1 ... 9:
        printf("entered no. is not even");
        break;
    }
    return 0;
}