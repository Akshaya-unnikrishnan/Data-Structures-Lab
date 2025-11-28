//binary search
#include<stdio.h>
void main()
{
int n,beg,end,mid,a[30],item,i,found=0;
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the elements:");
for (i=0; i<n;i++)
scanf("%d",&a[i]);
printf("Enter the item to search:");
scanf("%d",&item);
beg=0;
end-n-1;
while (beg<=end)
{
mid=(beg+end)/2;
if(item==a[mid])
{
found=1;
break;
}
else if(item<a[mid])
end-mid-1;
else
beg-mid+1;
}
if(found==1)
printf("The element %d is found at position %d",item,mid+1);
else
printf("Element not found");
}
