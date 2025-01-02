#include<stdio.h>

int largest(int array[],int n){
    int max=array[0];
    for(int i=1;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}

int main(){
    int array[]={10,24,432,983,234,3};
    int n=sizeof(array)/sizeof(array[0]);//by byte value

    printf("%d",largest(array,n));
    return 0;
}