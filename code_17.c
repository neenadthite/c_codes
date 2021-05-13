#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("data.txt","w")) == NULL){
       printf("Error! opening file");
       exit(1);
   }
    printf("Enter value of n:");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    printf("\nValue written successfully in data.txt");

   return 0;
}
