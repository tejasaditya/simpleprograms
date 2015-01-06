#include<stdio.h>

int main()
{
int a;         //year

printf("Enter the year\n");
scanf("%d",&a);

if (a%400 == 0)
    printf("This is a leap year\n");
else if (a%100 == 0)
    printf("This is not a leap year\n");
else if (a%4 == 0)
    printf("This is a leap year\n");
else
    printf("This is not a leap year\n");
}
