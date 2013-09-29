#include<conio.h>
#include<stdio.h>
int main()
{

int a[4]={2,4,5,3};

int temp=1;
for(i=0;i<4;i++)
{


if(a[i]%a[i+1]==0)
{
temp=a[i]/a[i+1];

}
else
temp=1;

}




return 0 ;
}

