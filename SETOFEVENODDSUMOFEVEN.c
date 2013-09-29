#include<conio.h>
#include<stdio.h>
int main()
{

int p=0,t=0,sum=0,e[20],o[20],a[20],x,y,n,j,i;

printf("enter no of values to enter");
scanf("%d",&n);


for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}



for(j=0;j<n;j++)
{

   if(a[j]%2 == 0)
     {
     e[t]=a[j];
     t++;
      }
 
   else
    {
    o[p]=a[j];
    p++;
     }



}

printf("even numbers :");
for(i=0;i<t;i++)
{
sum=sum+e[i];
printf("%d ",e[i]);

}
printf("sum of even numbers:%d ",sum);


printf("\n odd numbers :");
for(i=0;i<p;i++)
{
printf("%d ",o[i]);
}


return 0;
}

