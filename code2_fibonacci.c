

#include <stdio.h>
int main()
{
int num;
int next=0;
int m=0;
int n=1;
int i=1;
printf("\nEnter highest limit of Fibbonacci series = ");
scanf("%d",&num);
printf("\nFibonacci series= ");
while(i<=num)
{
printf("%d\t",m);
next=m+n;
m=n;
n=next;
i++;
}
return 0;
}