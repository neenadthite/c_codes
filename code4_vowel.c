#include<stdio.h>
int main()
{
char ch;
printf("Enter character: ");
scanf("%c",&ch);
switch (ch)
{
case 'a':
    printf("\nVowel ");
    break;
case 'A':
    printf("\nVowel");
    break;
case 'e':
    printf("\nVowel");
    break;
case 'E':
    printf("\nVowel");
    break;
case 'i':
    printf("\nVowel");
    break;
case 'I':
    printf("\nVowel");
    break;
case 'o':
    printf("\nVowel");
    break;
case 'O':
    printf("\nVowel");
    break;
case 'u':
    printf("\nVowel");
    break;
case 'U':
    printf("\nVowel");
    break;
default:
printf("\nConstant");
break;
}
return 0;
}