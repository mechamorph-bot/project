#include<stdio.h>
int main()
{

 int amount;
 scanf("%d",&amount);
 printf("%d\n",amount);

 int n100=amount/100;
 amount = amount%100;
 int n50=amount/50;
 amount=amount%50;
 int n20=amount/20;
 amount=amount%20;
 int n10=amount/10;
 amount=amount%10;
 int n5=amount/5;
 amount=amount%5;
 int n2=amount/2;
 amount=amount%2;
 int n1=amount;
 printf("%d nota(s) de R$ 100,00\n", n100);
 printf("%d nota(s) de R$ 50,00\n", n50);
 printf("%d nota(s) de R$ 20,00\n", n20);
 printf("%d nota(s) de R$ 10,00\n", n10);
 printf("%d nota(s) de R$ 5,00\n", n5);
 printf("%d nota(s) de R$ 2,00\n", n2);
 printf("%d nota(s) de R$ 1,00\n", n1);






return 0;
}
