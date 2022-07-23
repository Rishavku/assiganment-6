#include<stdio.h>
int main()
{
    int n,i,j=0;
    printf ("enter your first even natural number");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        j=j+i*2 ;
    }
     printf("sum of first  even nuumber is %d",j);

    return 0;
}
