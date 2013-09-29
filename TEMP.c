#include<conio.h>
#include<stdio.h>
int main()
{
int a ,b,c,d;
int x[5]={2,3,4,5,6};
int temp=x[0];
int hcf,div,quo,rem,divid;
for(a=0;a<4;a++)
{

if(temp<x[a+1])
{temp=x[0];}
else
{temp=x[a+1];}
}





rem=x[1]%temp;


while(rem>1)
{
	if(rem>x[0])
	{
	divid=div;
	rem=divid%rem;
	
	}
	else
	{
	break;
	}

}
hcf=div;

if(rem==0)
{hcf=div;}


printf("%d",hcf);
return 0;

}

