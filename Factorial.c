#include <stdio.h>
long fact (int n)
{
    if(n==0)
        return 1;
    return (long) n*fact(n-1);
}

int main()
{
    int n;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    printf("%d! = %ld",n,fact(n));
}