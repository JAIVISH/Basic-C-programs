#include<conio.h>
#include<stdio.h>
int main()
{

int i,a[100]={1,2,3,-2,6,8,3,-5};
for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
if(a[i]<0)
{
printf("negative number found at position :%d\n :", i+1);
}

}




return 0 ; }

