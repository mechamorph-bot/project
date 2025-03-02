#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x>=0 && x<=2000)
    {
        printf("No Tax");
    }
    if(x>2000 && x<=3000){
        printf("$%.2f",(1000*8)/100.0);}
    if(x>3000 && x<=4500){
        printf("$%.2f",(x*18)/100.0);}
    if(x>4500){
        printf("$%.2f",(x*28)/100.0);}


}
