#include<stdio.h>

int prime(int x)
{

    for(int i=2;i<x;i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{


    int n;
    printf("enter the element number:");
    scanf("%d",&n);
    if(n<=0){
        printf("you have to take atleast one input in arry\n");
    }
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(prime(a[i]))
            count++;

    }
printf("%d\n",count);



    return 0;
}
