#include<stdio.h>
int main()
{
    int i,n,j=0;
    printf("enter you first natural number to calculate the squares ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        j=j+i*i;
    }
    printf("the sum of first naural numbers of square are %d ",j);

    return 0;
}
