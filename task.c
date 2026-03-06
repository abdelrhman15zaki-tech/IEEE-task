#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum of %d and %d is %d\n",a,b,a+b);
    if (a==b)
    {
        printf("The numbers are equal.\n");
    }
    else
    {
        printf("The numbers are not equal.\n");
    }
    return 0;
}