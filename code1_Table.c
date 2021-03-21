

#include <stdio.h>
int main()
{
int number;
int ind=1;
int mult=0;
printf("Enter the number: ");
scanf("%d",&number);
while(ind<=10)
{
mult=number*ind;
printf("\n%d * %d = %d",number, ind, mult);
ind++;
}
return 0;
}