#include<stdio.h>
#include<math.h>
int main()
{
  double a,sum;
  int x;
  printf("Enter the base value:");
  scanf("%lf",&a);
  printf("Enter the exponent value:");
  scanf("%d",&x);
  sum = pow(a, x);
  printf("%.2lf raised to the power of %d is %.2lf\n",a,x,sum);


}
