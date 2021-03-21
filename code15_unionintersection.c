#include<stdio.h>
int main()
{
int i,j,cnt1,cnt2,arr1[20],arr2[20],arr3[50],k,l,m=0;
printf("\nEnter count for larger array: ");
scanf("%d",&cnt1);
for(i=0;i<cnt1;i++)
{
printf("\nEnter element %d: ",i+1);
scanf("%d",&arr1[i]);
}
printf("\nEnter count for smaller array: ");
scanf("%d",&cnt2);
for(j=0;j<cnt2;j++)
{
printf("\nEnter element %d: ",j+1);
scanf("%d",&arr2[j]);
}
for(k=0;k<cnt2;k++)
{
int flag=0;
for(l=0;l<cnt1;l++)
{
if(arr2[k]==arr1[l])
flag = flag+1;
}
if(flag!=0)
{
arr3[m]=arr2[k];
m++;
}
}
printf("\nIntersection array is: ");
for(int n=0;n<m;n++)
{
printf("%d\t",arr3[n]);
}
printf("\nUnion is: ");
for(int o=0;o<cnt1;o++)
printf("%d\t",arr1[o]);
for(int p=0;p<cnt2;p++)
{
int flag=0;
for(int q=0;q<=cnt1;q++)
{
if(arr2[p]==arr1[q])
flag=flag+1;
}
if (flag==0)
printf("%d\t",arr2[p]);
}
return 0;
}