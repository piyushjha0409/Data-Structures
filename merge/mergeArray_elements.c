#include<stdio.h>
#include<stdlib.h>
  

int main(){
  int i,m,n; //m sizeof(arr1) && n sizeof(arr2)
  int *p1,*p2;


  printf("Enter the size of the array-1\n");
  scanf("%d",&m);
  printf("Enter the size of the array-2\n");
  scanf("%d",&n);

     p1 = (int *)calloc(m+n,sizeof(int));
     p2 = (int *)calloc(n,sizeof(int));

printf("Enter the elements of first array\n");
for(i = 0; i<m; i++)
{
  scanf("%d",&p1[i]);
}
printf("Enter the elements of second array\n");
for(i = 0; i<n; i++)
{
    scanf("%d",&p2[i]);
}
//merging:
for(i=0; i<n; i++)
{
 p1[i+m] = p2[i];
}
printf("The total elements of the merge array are\n");
for(i = 0; i<m+n; i++){
    printf("%d ",p1[i]);
}
printf("\n");

return 0;
}