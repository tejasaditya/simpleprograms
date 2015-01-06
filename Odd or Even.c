#include<stdio.h>

main()
{
    int n;

    printf("Enter the number ");
    scanf("%d",&n);

    if(n%2 == 0)
        printf("\n%d is an even number\n",n);
    else
        printf("\n%d is an odd number\n",n);
}
