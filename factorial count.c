#include<stdio.h>
int main()
{
int X,sum=0,fact=1,i;
printf("Enter the value of your number:");
scanf("%d",&X);
for(i=1;i<=X;i++)
  {
  sum=fact*=i;
  }
  printf("factorial=%d",sum);






return 0;
}
