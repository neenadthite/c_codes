#include<stdio.h>
int main()
{
int num,sumrslt,sqrslt,cuberslt;
printf("\nEnter the number: ");
scanf("%d",&num);
sumrslt = summation(num);
sqrslt = square(num);
printf("Sum, Squares upto number %d is: %d %d",num,sumrslt,sqrslt);
return 0;
}
int summation(int num1)
{
int i=1;
int sum=0;
while(i<=num1)
{
sum=sum+i;
i++;
}
return sum;
}
int square(int num2)
{
int sqrsum=0;
int k=1;
while(k<=num2)
{
int j=1;
while(j<=k)
{
sqrsum=sqrsum+k;
j++;
}
k++;
}
return sqrsum;
}