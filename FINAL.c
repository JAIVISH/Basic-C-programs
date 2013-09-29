#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{

int a;
struct node *link;
}*start;

void create(int );
void display();
void insert(int );



int main()
{
int x;
start=NULL;
printf("enter no of nodes:");
scanf("%d",&x);


create(x); 
printf("\nDISPLAY\n");
display();

return 0;

}



void create(int d)
{
int l,k;
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));


for(k=0;k<d;k++)
{
if(start == NULL)
{
printf("first node: ",k);
scanf("%d",&l);
temp->a=l;
temp->link=NULL;
start=temp;

}

else
{
printf("enter data for node");
scanf("%d",&l);
insert(l);
 }

 }

printf("\nlist created:");

}

void display(){

struct node *y;
y=start;

while(y!=NULL)
{

printf("%d->",y->a);
y=y->link;
}
printf("\nTHE END");
getch(); 

}



void insert(int c)

{
struct node *xyz;
struct node *h;
h=(struct node*)malloc(sizeof(struct node));

xyz=start;
while(1)
{
if(xyz->link != NULL)
{ xyz=xyz->link;
 }
else
break;


}

h->a=c;
h->link=NULL;
xyz->link=h;


}



