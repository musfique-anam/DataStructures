#include<stdio.h>
 int main() 
 {
    int k,n,a[100];
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    printf("Array created successfylly!\n");
    printf("Enter the elements of the array:\n");
    for(k=1;k<=n;k++)
    scanf("%d",&a[k]);
    printf("\nAfter Traversing: ");
    for(k=1;k<=n;k++)
    printf("%4d",a[k]);
    return 0;
 }