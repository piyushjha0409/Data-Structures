#include<stdio.h>
  
  
int main(){
 static int arr[10][10];
 int i,j,m,n;
 int counter = 0;

 printf("Enter the order of the matrix \n");
 scanf("%d %d",&m,&n);
 
 printf("Enter the coefficient of matrix \n");

 for(i = 0; i<m ; ++i){
     for (j = 0; j<n; ++j)
     {
       scanf("%d", &arr[i][j]); 
       if( arr[i][j] == 0){
           ++counter; 
       }  
     }   
 }
 printf("Matrix is :-\n");
 for(i = 0; i<m ; ++i){
     for(j = 0; j<n ; ++j){
         printf("%3d",arr[i][j]);
     }
     printf("\n");
 }
 if(counter<((m*n)/2)){
     printf("The following matrix is the sparse matrix");
 }
 else{
     printf("the following matrix is the dense matrix");
     printf("There are %d zeroes in the matrix",counter);
 }
    


return 0;

}