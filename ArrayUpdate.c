#include <stdio.h>
void main(){
    int array [5] = {2,4,5,8,10};
    int element =6,position =3;

    printf("Given Array Elements: \n");

    for(int i=0;i<5;i++){
        printf("Array[%d] = %d ",i,array[i]);
    }

    array[position-1]=element;//Main 

    printf("\nArray elements after updatation:\n");

    for(int i=0;i<5;i++){
        printf("Array[%d] = %d ",i,array[i]);
    }
}