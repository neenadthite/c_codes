#include<stdio.h>
int main()
{
int arr1[50],arr2[50],i=0,j=0,k,l,cnt1,cnt2;
printf("\nEnter count for 1st array: ");
scanf("%d",&cnt1);
while(i<cnt1)
{
printf("Enter element %d: ",i+1);
scanf("%d",&arr1[i]);
i++;
}
printf("\nEnter count for 2nd array: ");
scanf("%d",&cnt2);
while(j<cnt2)
{
printf("Enter element %d: ",j+1);
scanf("%d",&arr2[j]);
j++;
}
int flag=0;
for(k=0;k<cnt1;k++)
{
for(l=0;l<cnt2;l++)
{
if(arr1[k]==arr2[l])
flag=flag+1;
}
}
if (flag==cnt2)
printf("\nArray2 is sub-set of Array1");
else
printf("\nArray2 is not sub-set of Array1");
return 0;
}