#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j,k=0;
    printf("enter your number");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        j=n%10;
        n=n/10;
        k=k*10+j;
        
    }
    printf("%d",k);
    return 0;
}
