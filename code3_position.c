

#include <stdio.h>
#include <stdlib.h>
int main()
{
int number;
int key;
printf("\nEnter number: ");
scanf("%d",&number);
printf("\n Enter Number you want to search: ");
scanf("%d",&key);
int pos=1;
while(pos<=number)
{
int rem = number%10;
if (rem==key)
{
printf("\n The Digit %d found at place: %d",key,pos); }
pos++;
number=number/10;
}
return 0;
}