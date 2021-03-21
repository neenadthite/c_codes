#include<stdio.h>
int main()
{
int rem=0,sum=0;
int num;
printf("\nEnter the number:");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("\nSum=%d",sum);
return 0;
}