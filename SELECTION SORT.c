#include<conio.h>
#include<stdio.h>
int main()
{

int a ,temp,i,j, b, c[6] ;
for(a=0;a<6;a++)
{
scanf("%d",&c[a]);
}


printf("before selection sort: \n");
for(a=0;a<6;a++)
{
printf("%d ",c[a]);
}


for(i=0;i<6;i++)
{
for(j=0;j<6;j++)

if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;

}
}



printf("after selection sort");
for(a=0;a<6;a++)
{
printf("%d ",c[a]);
}

return 0;

}

