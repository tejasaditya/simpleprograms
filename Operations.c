//Calculator by Master Tejas Aditya
#include<stdio.h>
#include<time.h>

int main()
{
    int n1, n2, add, subtract, multiply,i;
    float divide;
    char ch;
    printf("Hi, Wanna Calculate Nos? You are at the right place.\n");
    for (i=0 ; i<599999999; i++);                                        //delay
    printf("Do you want all answers in positive(y/n)?");
    scanf("%c",&ch);
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);

       if(ch == 'Y' || ch == 'y' )
        subtract = n2 - n1;
              else
       subtract = n1 - n2;

    add = n1 + n2;
    multiply = n1 * n2;
    divide = n1/(float)n2;

    printf("Sum = %d\n",add);
    printf("Difference = %d\n",subtract);
    printf("Product = %d\n", multiply);
    printf("Quotient = %.2f\n",divide);
}
