#include<conio.h>
#include<stdio.h>
int main()
{


int b[7],i;
int a[]={1,2,3,4,5,6,7};
for (i=0;i<7;i++)
{
b[i]=a[6-i];
}
for(i=0;i<7;i++)

{
printf("%d",b[i]);
}


return 0;

}

