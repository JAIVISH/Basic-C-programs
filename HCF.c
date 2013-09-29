#include<conio.h>
#include<stdio.h>
int main()
{

int b,c,a[2]={5,9};


int rem , div, dvi;

    

rem=a[1]%a[0];


  if(rem>div)
     {
	dvi=rem;
	 rem=dvi%div;
      }
 	
			if(rem<div)
 			{
 
			 div=rem;
 
			 }


	if(rem!= div)
	{
	div=1;
	}




printf("%d",rem);

     












return 0 ;
}

