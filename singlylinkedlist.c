//singly linked list implementation(insertion and deletion)
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
void main()
{
struct node *header=NULL,*new,*temp,*ptr,*temp1;
int c,ch,item,value;

do
{
printf("Enter your choice: ");
printf("1-Insertion at front,2-Insertion at end,3-Insertion after a specific position,4-Deletion from front,5-Deletion from end,6-Deletion from a specific position,,7-Display\n");
scanf("%d",&ch);
switch(ch)
{
        case 1:printf("Enter the item:");
               scanf("%d",&item);
               new=(struct node *)malloc(sizeof(struct node));
               new->data=item;
               if (header==NULL)
               {
               new->link=NULL;
               header=new;
               }
               else
               {
               new->link=header;
               header=new;
               }
               break;
        case 2:printf("Enter the item:");
               scanf("%d",&item);
               new=(struct node *)malloc(sizeof(struct node));
               new->data=item;
               if (header==NULL)
               {
               new->link=NULL;
               header=new;
               }
               else
               {
               temp=header;
               while (temp->link!=NULL)
               {
               temp=temp->link;
               }
               temp->link=new;
               new->link=NULL;
               }
               break;
         case 3:printf("Enter the item:");
               scanf("%d",&item);
               printf("Enter the value(Specific position):");
               scanf("%d",&value);
               new=(struct node *)malloc(sizeof(struct node));
               new->data=item;
               if (header==NULL)
               {
               new->link=NULL;
               header=new;
               }
               else
               {
               temp=header;
               while(temp->data!=value)
               {
               temp=temp->link;
               }
               ptr=temp->link;
               temp->link=new;
               new->link=ptr;
               }
               break;
        case 4:if(header==NULL)
                printf("No nodes to delete");
                else
                {
                temp=header;
                header=header->link;
                }
                free(temp);
                break;
         case 5:if(header==NULL)
                printf("No nodes to delete");
                else
                {
                temp=header;    
                while(temp->link!=NULL)
                {
                temp1=temp;
                temp=temp->link;
                }
                temp1->link=NULL;
                free(temp);
                }
                break;
          case 6:if(header==NULL)
                printf("No nodes to delete");
                else
                {
                printf("Enter the value(Specific position):");
                scanf("%d",&value);
                temp=header;
                while(temp->data!=value)
                {
                temp1=temp;
                temp=temp->link;
                }
                ptr=temp->link;
                temp1->link=ptr;
                }
                free(temp);
                break;
         case 7:temp=header;
                while(temp!=NULL)
                {
                printf("%d->",temp->data);
                temp=temp->link;
                }
                break;
                
         default:printf("Invalid input");
                 break;
}
printf("Do you want to continue(1)or not(0)");
scanf("%d",&c);
}
while(c!=0);
}
