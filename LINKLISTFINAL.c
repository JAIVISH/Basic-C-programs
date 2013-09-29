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
void insertbeg(int);
void insertmed(int,int);
void delete(int,int);

int main()
{
int q,r,o,x,m;
start=NULL;
printf("enter no of nodes:");
scanf("%d",&x);


create(x); 
printf("\nDISPLAY\n");
display();
printf("\ninsert starting value");
scanf("%d",&m);
insertbeg(m);
display();

printf("\ninsert point and value ");
scanf("%d%d",&m,&o);
insertmed(m,o);
display();

printf("\nenter value to delete value ");
scanf("%d%d",&q,&r);
delete(q,r);
display();


return 0;

}
void delete(int data, int pos)
{

int i;
struct node *temp,*xyz;
xyz=start;

for(i=0;i<pos;i++)
{
   
xyz=xyz->link;
}
if(xyz->link==NULL)
{
free(xyz);
}
else
{
/*temp=(struct node *)malloc(sizeof(struct node));
*/
/*temp->a=data;*/
xyz=xyz->link;
free(xyz);

}







}






void insertmed(int pos,int data)
{
int i;
struct node *temp,*xyz;
xyz=start;

for(i=0;i<pos;i++)
{
   
xyz=xyz->link;
}
if(xyz->link==NULL)
{
insert(data);
}
else
{
temp=(struct node *)malloc(sizeof(struct node));
temp->a=data;
temp->link=xyz->link;
xyz->link=temp;
}




}




void insertbeg(int data)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->a=data;
temp->link=start;
start=temp;
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

printf("\nlist created");

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



