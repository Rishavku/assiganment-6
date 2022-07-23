#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,n,i;
    printf ("enter you two number");
    scanf ("%d %d", &m, &n);
    for (i=1;i<=m*n ;i++)
    {
if (m%i==0 && n%i==0)
{

    break;
}
     }
printf("the l.c.m is %d", i);

    
    return 0;
}
