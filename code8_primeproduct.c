#include<stdio.h>
int main()
{
int start,end,product=1,i,j;
int arr[50],k=0,count;
printf("\nEnter the Start number: ");
scanf("%d",&start);
printf("\nEnter End number: ");
scanf("%d",&end);
i=start;
while(i>=start && i<=end)
{
j=2;
int flag=0;
while(j<i)
{
if(i%j==0)
flag=flag+1;
j++;
}
if(flag==0)
{
arr[k]=i;
product=product*i;
k++;
}
i++;
}
count=k;
printf("\nProduct of prime numbers between %d to %d is: ",start,end);
for(k=0;k<count-2;k++)
{
printf("%d*",arr[k+1]);
}
printf("%d",arr[count-1]);
printf(" = %d",product);
return 0;
}