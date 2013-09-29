#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


struct node
{

int a ;
struct node *ptr;
}*start;



int main() 
{

struct node *next;
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));

if(start==NULL)
{

temp->a=4;
temp->ptr=NULL;
start=temp;

}


printf("LIST IS: ");


next=start;
if(start==NULL)
{
printf("oo");}

while(next!=NULL)
{
printf("%d",next->a);
next=next->ptr;
}





return 0;
}




