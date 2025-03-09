#include<stdio.h>
int main()
{
    int arr[3],i;
    for(i=0;i<3;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);

    }
printf("%d\n%d\n%d\n",arr[0],arr[1],arr[2]);
}
