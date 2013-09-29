#include<conio.h>
#include<stdio.h>
int main()
{

int i,x,t=0,r=0 ;
char a[20],v[10],p[10];

for(i=0;i<5;i++)
{scanf("%s",&a[i]);}

for(i=0;i<5;i++)
{

if(a[i]=='a'|| a[i]=='e'||a[i]=='i'|| a[i]=='o'||a[i]=='u'|| a[i]=='A')
{
 

v[r]=a[i];
r++;
}

else 
{

p[t]=a[i];
t++;
}
}

printf("\n vowels:");

for(x=0;x<r;x++)
{
printf("%c",v[x]);
}

printf("\n consonants:");
for(x=0;x<r;x++)
{
printf("%c",p[x]);
}



return 0;
}

