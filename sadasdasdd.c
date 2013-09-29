#include<conio.h>
#include<stdio.h>
int main()
{
int a ,j,b,c,d,i;
int x[5]={64,8,4,16,32};
int temp=x[0];
int hcf,div,quo,rem,divid;
int flag=0;
int you[5],u;
for(a=0;a<4;a++)
{

if(temp<x[a+1])
{temp=x[0];}
else
{temp=x[a+1];}
}

printf("%d",temp);


for(j=0;j<5;j++)
{
   for(i=2;i<temp;i++)
    {

    if(x[j]%i==0)
      {
	   
	  flag++;
      
	  /* 
	  printf("hcf : %d",i);
	   */
	   
      you[u]=i;
	  u++;
  	  
	  
	   }

	  printf("%d",you[u]);    	   
    }


	  printf("\n");   
}


if(flag>=5)
{
printf(" hcf : %d",you);
}


return 0 ;
}

