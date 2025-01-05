#include<stdio.h>

int main()
{

    int array[20]={2,4,6,10,12,14,16,18,20};
    int element,position,n=9;

    printf("Array elements before insertion\n");
    for (int i=0;i<n;i++){
        printf(" %d ",array[i]);
    }
    printf("\n");

    printf("Enter the element to insert: ");
    scanf("%d",&element);

    printf("Enter the position to insert: ");
    scanf("%d",&position);
    n++;

    for(int i=n-1;i>=position;i--){//starts from last to positon
        array[i]=array[i-1];//Shifting position for  new element
    }
    array[position-1]=element;

    printf("Array elements after insertion:\n");

    for (int i=0;i<n;i++){
        printf(" %d ",array[i]);
    }
    printf("\n");

    return 0;

}