#include<stdio.h>
int main()
{
    int  n,i,j=0;
    printf("enter your first odd number");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        j=j+i*2-1;
    }
    printf("sum of first odd number is %d",j);

    return 0;
}
