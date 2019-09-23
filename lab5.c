#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node * NODE;
NODE insert_front(int item,NODE head);
NODE insert_end(NODE head,int item);
NODE getnode();
void display(NODE head);
NODE getnode()
{
NODE p;
p=(NODE)malloc(sizeof(struct node));
if(p!=NULL)
return p;
else
{
printf("Memory couldn't be allocated\n");
exit(0);
}
}
NODE insert_front(int item,NODE head)
{
NODE p;
p=getnode();
p->data=item;
p->next=head;
head=p;
return head;
}
NODE insert_end(NODE head,int item)
{
NODE p,q;
q=getnode();
q->data=item;
q->next=NULL;
if(head==NULL)
return q;
p=head;
while(p->next!=NULL)
{
p=p->next;
}
p->next=q;
return head;
	
}

void display(NODE head)
{
NODE p;
if(head==NULL)
{
printf("List is empty\n");
exit(0);
}
p=head;
while(p!=NULL)
{
printf("%d\n",p->data);
p=p->next;
}
}
int main()
{
NODE head=NULL;
int ch,item,pos;
printf(" :::Enter your choice:::   \n1.  Insert at front\n2.  insert at end\n3.  Display\n4.  Exit\n");
scanf("%d",&ch);
while(ch!=4)
{
switch(ch)
{
case 1:printf("Enter the item\n");
scanf("%d",&item);
head=insert_front(item,head);
break;		
case 2:printf("Enter the item\n");
scanf("%d",&item);
head=insert_end(head,item);
break;
case 3:display(head);
break;
default:printf("Invalid Input\n");
}
printf("Enter next choice or 4 to exit\n");
scanf("%d",&ch);
}
return 0;
}
	

