//linear search
#include <stdio.h>
void main()
{
    int n,a[30],i,key,found=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    if(n>30)
    printf("Too many elements");
    else
    {
        printf("Enter the elements:");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter the key(element to be searched:");
        scanf("%d",&key);
        for(i=0;i<n;i++)
        if(a[i]==key)
        {
           printf("Found at position %d",i+1);
            found=1;
            break;
    }
    if (found==0)
    printf("Not Found");
}
}

