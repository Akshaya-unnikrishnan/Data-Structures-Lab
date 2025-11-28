//BUbble sort-sorting an array
#include<stdio.h>
void main() {
int a[20],i,j,temp,n;
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++) {
for(j=0;j<n-i-1;j++) {
if(a[j]>a[j+1]) {
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp; }}}
printf("The sorted array is ");
for(i=0;i<n;i++)
printf("%d\t",a[i]); }
