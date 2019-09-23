#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;          
    struct node *next; 
}*head;


void insertNodeAtBeginning(int data);
void insertNodeAtEnd(int data);
void displayList();


int main()
{
    int  data;

   printf("\nEnter data to insert at beginning of the list: ");
   scanf("%d", &data);
   insertNodeAtBeginning(data);
  
    printf("\nEnter data to insert at end of the list: ");
    scanf("%d", &data);
    insertNodeAtEnd(data);

    printf("\nDisplay data which is inserted  \n");
    displayList();

    return 0;
}




void insertNodeAtBeginning(int data)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; 
        newNode->next = head; 

        head = newNode;          
        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}


void insertNodeAtEnd(int data)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; 
        newNode->next = NULL; 

        temp = head;

        while(temp->next != NULL)
            temp = temp->next;

        temp->next = newNode; 
        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}


void displayList()
{
    struct node *temp;

 
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); 
            temp = temp->next;                 
        }
    }
}
