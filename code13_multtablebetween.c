#include<stdio.h>
int main()
{
int arr[20][10],start,str,lmt,end,i=0;
printf("\nEnter start and end number for tables: ");
scanf("%d %d",&str,&end);
start=str;
lmt=end-str;
printf("\nMultiplication Tables from %d to %d stored in array.",str,end);
while(i<=lmt)
{
int j=0,k=1;
while(k<=10&&j<10)
{
arr[i][j]= str*k;
k++;
j++;
}
str++;
i++;
}
printf("\nEnter no. to print table (positive only or 0 to exit): ");
int num;
scanf("%d",&num);
int l=0;
int m;
m=num-start;
printf("\nTable is as follows: ");
while(l<10)
{
printf("%d ",arr[m][l]);
l++;
}
return 0;
}