#include<stdio.h>
  
  
int main(){
  int r,c,a[100][100],b[100][100],sum[100][100],i,j;

  printf("Enter the number of rows(1-100): ");
  scanf("%d",&r);
  printf("Enter the number of coloumns(1-100): ");
  scanf("%d",&c);

 printf("Enter the elements of the 1st matrix:\n");
 for(i = 0; i<r; ++i){
     for(j = 0; j<c; ++j){
         printf("Enter element a%d%d:",i + 1,j + 1);
         scanf("%d",&a[i][j]);
     }
 }
 printf("Enter the elements of the 2nd matrix:\n");
 for(i = 0; i<r; ++i){
     for(j = 0; j<c; ++j){
         printf("Enter element b%d%d:",i+1,j+1);
         scanf("%d",&b[i][j]);
     }
 }
 //Addition of  matrices:
 for(i = 0; i<r; ++i){
     for(j = 0; j<c; ++j){
         sum[i][j] = a[i][j] - b[i][j];
     }
 }
 //Printing the results :
 for(i = 0; i<r; ++i){
     for(j = 0; j<c; ++j){
         printf("%d ",sum[i][j]);
         if(j== c-1){
             printf("\n\n");
         }
     }
 }
return 0;
}