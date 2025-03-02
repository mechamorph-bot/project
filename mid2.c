#include<stdio.h>
int isprime(int n)
{

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
       else
            return 1;
    }
}
int main()
{
    int x,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    scanf("%d",&x);
    if(isprime(x))
    {
        printf("%d is prime\n",x);
    }
    else
    {
        printf("%d isn't prime\n",x);
    }
    }
    return 0;
}
