#include<stdio.h>
int factoral(int N)
{
    int fact=1;
    for(int i=1;i<=N;i++)
    {
        fact *=i;
    }
    return fact;
}
int main()
{
    int X;
    scanf("%d",&X);
    printf("factorial of %d is %d\n",X,factorial(X));
}
