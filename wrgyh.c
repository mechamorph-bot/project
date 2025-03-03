#include<stdio.h>
int main()
{
    double x,sum=1,trm=1;
    int n;

    printf("enter the value of x and n ; ");
    scanf("%lf %d",&x,&n);
    for(int i=1;i<=n;i++)
    {
        trm*=x;
        sum+=trm;
    }
}
