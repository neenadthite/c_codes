#include<stdio.h>
int main()
{
int arr[50],i=0,k=0,count,place,pos,arrptr;
printf("\nEnter the array count: ");
scanf("%d",&count);
while(i<count)
{
printf("Enter position %d bit (either 0 or 1): ",i+1);
scanf("%d",&arr[i]);
i++;
}
printf("\nEnter the position upto which you want to invert: ");
scanf("%d",&place);
pos=place-1;
invert(arr,&pos);
printf("\nElements after inversion are: ");
while(k<count)
{
printf("\nBit at position %d is: %d",k,arr[k]);
k++;
}
return 0;
}
int invert(int *arr1, int *p)
{
int j=0;
while(j<=*p)
{
if(*arr1==0)
*arr1=1;
else
*arr1=0;
arr1++;
j++;
}
return 0;
}