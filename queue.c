//queue implemetation using array
#include <stdio.h>
void main()
{
int q[20],ch,rear=-1,front=-1,item,n,c;
do
{
printf("Enter maximum size of queue: ");
scanf("%d",&n);
printf("Enter you choice 1-Enqueue,2-Dequeue:,3-Display: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the elements: ");
scanf("%d",&item);
if(rear>=n-1)
printf("Queue full");
else if(front=-1&&rear==-1)
{
front=rear=0;
q[rear]=item;
}
else
{
rear=rear+1;
q[rear]=item;
}
break;
case 2:if(front==-1)
printf("Queue empty");
else if(front==rear)
{
item=q[front];
front=rear=-1;
}
else
{
item=q[front];
front=front+1;
}
printf("Deleted element is %d",item);
break;
case 3:for(i=front;i<=rear;i++)
{
printf("%d\n",queue[i]);
}
break;
default:printf("invalid input");
break;
}
printf("Do you want to continue(1) or not(0): ");
scanf("%d",&c);
}
while(c!=0);
}
