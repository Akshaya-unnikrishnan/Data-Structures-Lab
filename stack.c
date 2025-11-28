//stack implementation using array
#include <stdio.h>
void main()
{
int stack[20],ch,top=-1,item,n,i,c;
printf("Enter maximum size of stack: ");
scanf("%d",&n);
do
{
printf("Enter you choice 1-PUSH,2-POP,3-display: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the elements: ");
scanf("%d",&item);
if(top>=n-1)
printf("Stack overflow");
else
{
top=top+1;
stack[top]=item;
}
break;
case 2:if(top<0)
printf("stack underflow");
else
{
item=stack[top];
top=top-1;
printf("Deleted element is %d",item);
}
break;
case 3:for(i=top;i>=0;i--)
printf("%d\t",stack[i]);
break;
default:printf("invalid input");
break;
}
printf("Do you want to continue(1) or not(0): ");
scanf("%d",&c);
}
while(c!=0);
}
