#include<conio.h>
#include<stdio.h>
int main()
{



int i,k,temp,n,a[10] ;
printf("how many numbers do you want to enter  :");
scanf("%d",&n);
for( i=0;i<n;i++)
{
scanf("%d",&a[i]);
 }
 
 for(k=n-1;k>0;k--)
 {
 
 for(i=0;i<n-1;i++)
 {
 
 if(a[i]>a[i+1])
 {
 temp=a[i];
 a[i]=a[i+1];
 a[i+1]=temp;
 }
 
 }
 
 }
 
 printf("bubble sort: ");
 for( k=0;k<n;k++)
 {
 printf("%d ",a[k]);
 }


return 0;

}

