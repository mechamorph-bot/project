#include<stdio.h>
#include<math.h>
int main()
{
    double a,s,d,f;
    scanf("%lf %lf %lf %lf",&a,&s,&d,&f);
    double distance =sqrt((d-a)*(d-a)+(f-s)*(f-s));
    printf("%.4lf",distance);

}
