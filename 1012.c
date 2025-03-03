#include<stdio.h>
#define PI 3.14159
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    printf("TRIANGULO:%.3f\n",((1.0/2.0)*(a*c)));
    printf("CIRCULO:%.3f\n",(PI*(c*c)));
    printf("TRAPEZIO:%.3f\n",((1.0/2.0)*(a+b)*c));
    printf("QUADRADO:%.3f\n",(b*b));
    printf("RETANGULO:%.3f\n",(a*b));
}
