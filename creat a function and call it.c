#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if (N<=1)
        {
        printf("the number is not a prime number");
        }
        else if(N==2)
        {
            printf("the number is prime number");
        }
     for(int i=2;i<N;i++)
     {
         if(N%i==0)
         {
             printf("the number is not prime number");
             break;
         }
         else
         {
             printf("the number is prime number");
             break;
         }
     }
    return 0;
}
