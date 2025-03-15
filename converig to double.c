#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[]="124z3yu87";
    char b[]="-3.4";
    char c[]="e24";

    double i1 = atof(a);
    double i2 = atof(b);
    double i3 = atof(c);
    printf("i1:%lf\n",i1);
    printf("i2:%lf\n",i2);
    printf("i3:%lf\n",i3);
}
