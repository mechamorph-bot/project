#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of element:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    int small=arr[0];
    for(int i=1;i<n;i++)
    if(arr[i]<small)
    {
        small=arr[i];
    }
    printf("The smallest element is %d\n",small);

    return 0;
}
