#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
int temp,c[10],i,a,j;
char b[10];

scanf("%s",&b);


for(j=strlen(b);j>0;j--)
{
for(i=0;i<strlen(b);i++)
{

if(b[i]>b[i+1])
    { 
     temp=b[i];
     b[i]=b[i+1];
     b[i+1]=temp;
  
     }

}

}


for(i=0;i<5;i++)
{

printf("%s",b[i]);
}
return 0;
}

