#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,k;
char a[15],temp;


printf("enter a word:");
for(i=0;i<5;i++)
{
scanf("%s",&a[i]);
}







for (j=5;j>=0;j--)
{
   for(i=0;i<5;i++)
   {


   if(a[i]>a[i+1])
   {
   temp=a[i+1];
   a[i+1]=a[i];
   a[i]=temp;
   }


    }
}


for(i=0;i<6;i++)
{
printf("%c",a[i]);
}

return 0;

}

