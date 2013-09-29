#include<conio.h>
#include<stdio.h>
int main()
{



	int t=0;
int a[10]={1,2,3,4,5,6,7,8,9,10},b[5]={1,2,3,4,5};

int q,p,l,i,temp,x=sizeof(a)/ sizeof(a[0]);
int y=sizeof(b)/ sizeof(b[0]);

printf("enter no from which you want to append ");
scanf("%d",&q);
if(x>y)
{
temp=x;
}

else
{
temp=y;
}


	
for(i=0;i<10;i++)
{

  if(a[i]==q)
  {

  
  	  for(p=0;p<5;p++)
  	  {
  	  a[p+i+1]=b[p];
	
       	   
  	  }
	i=6;	
  }
  

}

for(i=0;i<10;i++)
{

printf("%d",a[i]);
}





return 0 ; 

}

