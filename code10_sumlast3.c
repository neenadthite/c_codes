#include<stdio.h>
int main()
{
int i=0,count;
printf("\nEnter number till which you want to print: ");
scanf("%d",&count);
int arr[50];
arr[0]=1;
arr[1]=3;
arr[2]=4;
printf("\n%d %d %d ",arr[0],arr[1],arr[2]);
while(i+3 < count)
{
arr[i+3]=arr[i]+arr[i+1]+arr[i+2];
printf("%d ",arr[i+3]);
i=i+1;
}
return 0;
}