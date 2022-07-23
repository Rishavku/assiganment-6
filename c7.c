#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("enter your number");
    scanf("%d",&n);
    for ( i = 0; n!=0;i++ )
    {
        n=n/10;
          
    }
    printf("%d",i);
    return 0;
}
