#include<stdio.h>

int main(){
    
    int total;
    int i;
    int temp;

    printf("How many numbers you want to enter : ");
    scanf("%d",&total);

    int array[total];

    for(i=0; i<total; i++){
        printf("Enter element for position %d : ",i+1);
        scanf("%d",&array[i]);
    }

    
    printf("Array entered : \n");
    for(i=0; i<total; i++){
        printf("%d ",array[i]);
    }

     for(i=0;i < total;i+=2)
    {
        
        if(i+1 == total){
            break;
        }

        temp = array[i];
        array[i]  = array[i+1];
        array[i+1]= temp;
    }

    printf("\nArray after swaping is done : \n");
    for(i=0; i<total; i++){
        printf("%d ",array[i]);
    }

}