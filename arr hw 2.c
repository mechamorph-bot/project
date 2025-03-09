#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of element:");
    scanf("%d",&n);
    if(n<2)
    {
        printf("need atleast two number to show output");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    int small=arr[0],smallest=arr[0];
    for(int i=1;i<n;i++){
    if(arr[i]<smallest)
    {
        smallest=arr[i];
    }
    }
    for (int i=0;i<n;i++)
    if(arr[i]>smallest)
    {
        if(arr[i]<small){
            small=arr[i];
        }
    }
    printf("The second_small element is %d\n",small);

    return 0;
}
