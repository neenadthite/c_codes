#include<stdio.h>
int main()
{
int marks1,marks2,marks3,avg;
printf("Enter marks of 3 subject:");
printf("\nSubject1: ");
scanf("%d",&marks1);
printf("\nSubject2: ");
scanf("\n%d",&marks2);
printf("\nSubject3: ");
scanf("%d",&marks3);
avg= (marks1+marks2+marks3)/3;
if(avg>=80)
printf("\nGrade: A+");
if(avg<=80 && avg>=70)
printf("\nGrade: A");
if(avg>=50 && avg<70)
printf("\nGrade: B");
if(avg<50)
printf("\nGrade: C");
return 0;
}