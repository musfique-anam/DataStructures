#include <stdio.h>
void ToH(int n,char Beg,char Aux,char End) {
    if(n==1)
    {
        printf("\n disk 1 move from %c to %c",Beg,End);
        return;
    }
    ToH(n-1,Beg,End,Aux);
    printf("\n %d move from %c to %c",n,Beg,End);
    ToH(n-1,Aux,Beg,End);
} 
int main()
{
    int n;
    printf("\n Enter the disk: ");
    scanf("%d",&n);
    ToH(n,'A','B','C');
    return 0;
}