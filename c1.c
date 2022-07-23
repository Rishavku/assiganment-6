#include<stdio.h>
int main()
{
    int n,i,j=0;
    printf("enter the sum of first natural number");
    scanf("%d",&n);
    for ( i = 0; i <=n ; i++)
    {
        j=j+i;
    }
    printf("sum is %d",j);

    return 0;
}
