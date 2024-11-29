#include<stdio.h>
long Fibo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    return (long)Fibo(n-1)+Fibo(n-2);
}

/*Or the below functiona can be used
{
    if(n==0 || n==1)
        return n;

    return (long)Fibo(n-1)+Fibo(n-2);
}*/

int main()
{
    int (n);
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    printf("The %dth Fibonacci number is: %ld",n,Fibo(n));
}

