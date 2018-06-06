#include<stdio.h>
int main(){
 int i,j,size,arr[10][10],b[10][10];
 
 printf("enter size:");
 scanf("%d",&size);
 
 printf("matrix=\n");
 
 for(i=0;i<size;i++)
 {
 
  for(j=0;j<size;j++)
  {
   scanf("%d",&arr[i][j]);
  }
 }
 
 for(i=0;i<size;i++)
 {
  for(j=0;j<size;j++)
  {
   b[i][j]=arr[i][j]*arr[i][j];
  }
 }
 printf("new matrix=%d\t",b[i][j]); 
 printf("\n");
return 0;
}
