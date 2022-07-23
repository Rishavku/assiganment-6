#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter a number to calculate the factorial");
    scanf("%d",&n);
    for ( i = 1; n>=i; n--)
    {
        i=i*n;
    }
    printf("%d",i);

    return 0;
}
