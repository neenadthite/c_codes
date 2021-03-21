#include<stdio.h>
int main()
{
int fact=1,ip,i;
printf("\nInput: ");
scanf("%d",&ip);
for(i=1;i<50000;i++)
{
fact=fact*i;
if(fact%ip==0)
break;
}
printf("\nOutput: %d\n",i);
printf("\nExplanation:\nThe required number is %d whose factorial %d is divisible by %d\n",i,fact,ip);
return 0;
}