//circular queue implemetation
#include<stdio.h>
void main()
{
int cq[30],n,i,front=-1,rear=-1,item,c,ch;
printf("Enter the maximum size of queue");
scanf("%d",&n);
do
{
printf("Enter your choice 1-insertion,2-deletion,3-display");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the element:");
scanf("%d",&item);
if(front==((rear+1)%n))
printf("queuefull");
else if(front==-1&&rear==-1)
{
front=rear=0;
cq[rear]=item;
}
else
{
rear=(rear+1)%n;
cq[rear]=item;
}
break;
case 2:if(front==-1)
printf("queue empty");
else if(front==rear)
{
item=cq[front];
front=rear=-1;
}
else
{
item=cq[front];
front=(front+1)%n;
}
printf("deleted element is %d",item);
break;
case 3:for(i=front;i<=rear;i++)
{
printf("%d\t",cq[i]);
}
break;
default:printf("invalid input");
break;
}
printf("Do u want to continue(1) or not(0):");
scanf("%d",&c);
}
while(c!=0);
}
