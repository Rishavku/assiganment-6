#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,f=0;
    printf("enter your number");
    scanf("%d",&n);
    for ( i = 2; i<n; i++)
    {
        if (n%i==0)
        {
            f=1;
            break;
           }
        
        if (f==1)
        
            printf("not prime number");
        
        else
        printf("prime number");
    
    }
    return 0;
}
