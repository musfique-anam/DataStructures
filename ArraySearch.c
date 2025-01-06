#include <stdio.h>

void main() {
    int array[4]={2,3,4,5};
    int search=3;

    printf("Given array elemets: \n");

    for(int i=0;i<4;i++){
        printf("Array[%d] = %d ",i,array[i]);
    }

    printf("\nElement to search = %d",search);
    int j=0;
    while(j<4){
        if(array[j]==search){
            break;
        }
        j=j+1;
    }

    printf("\nElement %d found at position = %d ",search,j+1);
}