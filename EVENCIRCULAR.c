#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{


int a[]={0,1,2,3,4,5,6,7,8,9};
int k,p,i;


int x=(sizeof(a) / sizeof(a[0]));




int temp=a[2];

for(i=0;i<4;i++)
{

temp=a[(2*i+4)%10];

a[(2*i+4)%10]=a[(2*i+2)%10];

a[(2*i+2)%10]=temp;





}

for(i=0;i<10;i++)
{

printf("%d",a[i]);
}





return 0;
}

