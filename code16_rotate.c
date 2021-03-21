#include<stdio.h>
int main()
{
int a[20],count,rt;
printf("\nEnter no. of elements in array: ");
scanf("%d",&count);
for(int i=0;i<count;i++)
{
printf("\nEnter element %d: ",i+1);
scanf("%d",&a[i]);
}
printf("\nEnter shift value: ");
scanf("%d",&rt);
for(int j=count-1;j>=0;j--)
a[j+rt] = a[j];
for(int k=0;k<rt;k++)
a[k] = a[count+k];
printf("\nRotated array is: ");
for(int l=0;l<count;l++)
{
printf("%d\t",a[l]);
}
return 0;
}
