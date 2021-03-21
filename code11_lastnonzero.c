#include<stdio.h>
int main()
{
int i=1,fact=1,num,n;
printf("\nEnter number:");
scanf("%d",&num);
while(i<=num)
{
fact=fact*i;
i++;
}
n=fact%10;
int factorial;
while(n==0)
{
factorial =fact/10;
n=factorial%10;
}
printf("\nLast non zero number in factorial %d is %d",fact,n);
return 0;
}