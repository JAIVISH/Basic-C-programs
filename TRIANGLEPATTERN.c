#include<conio.h>
#include<stdio.h>
int main()
{



int i,j,k;

int temp=7;






for(i=0;i<5;i++)
{

       for(j=i;j>0;j--)
             {
             printf(" * ");
			 
			 }
printf("\n");

      }

for(i=1;i<=7;i++)
{

       for(j=1;j<temp;j++)
             {
			 printf(" ");
			 }
			 temp--;
			 
			 for(k=1;k<=2*i-1;k++)
			 {
			 printf("*");
			 }
             
			 
printf("\n");

      }



return 0 ;
}

