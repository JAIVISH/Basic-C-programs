#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{

int a;
struct node *link;
}*start;

void create(int);
void display();
main()
{
int n,i;
start=NULL;
pritnf("enter 4 no's");

for(i=0;i<5;i++)
{

scanf("%d",&n);
  create(n);

}

display();
return 0;
}


    void create(int data) 

    {

 struct node *temp;
     temp=(struct node *)malloc(sizeof(struct node));
int i;
for(i=0;i<data;i++)
{
    if(start==NULL) 
    {
     printf("enter value %d:",i);
	 scanf("%d",&data);
     temp->a=data ;
     temp->link=NULL;
     start=temp;
     printf("created");
 
    }
	else
	{  
	printf("enter value %d",i);
	scanf("&data");
	insert(data);
	}
getch();
system("cls");
	
}

}
void display()
{
struct node *ptr;
ptr=start;
while(ptr->link == NULL)

{

printf("%d",ptr->a);
ptr=ptr->link;
}

getch();

}

