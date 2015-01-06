#include<stdio.h>

int main()
{
   char ch;
   printf("Enter a character\n");
   scanf("%c",&ch);

     if
        (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
           printf("The character is a vowel");
     else
           printf("The character is not a vowel");
}
