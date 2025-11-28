//sparse matrix check
#include<stdio.h>
void main(){
   int r,c,i,j,a[10][10],count=0;
   printf("Enter the no: of rows and columns:");
   scanf("%d%d",&r,&c);
   printf("Enter Elements of Matrix:");
   for(i =0;i<r;i++){
      for(j=0;j<c;j++){
         scanf("%d",&a[i][j]);
      }
   }
   for(i = 0; i <r; i++){
      for(j = 0; j <c; j++){
         if(a[i][j] == 0)
            count++;
      }
   }
   if(count>((r*c)/2))
      printf("Matrix is a sparse matrix");
   else
      printf("Matrix is not sparse matrix");
}
