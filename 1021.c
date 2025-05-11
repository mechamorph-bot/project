#include<stdio.h>
int main()
{
 float x;
 scanf("%f",&x);

 int import=(int)x;
 int coins=(int)((x-import)*100 + 0.5);

 int import100=import/100;
 import=import%100;

 int import50=import/50;
 import=import%50;

 int import20=import/20;
 import=import%20;

 int import10=import/10;
 import=import%10;

 int import5=import/5;
 import=import%5;

 int import2=import/2;
 import=import%2;

 int c100=import;

 int c50=coins/50;
 coins=coins%50;

 int c25=coins/25;
 coins=coins%25;

 int c10=coins/10;
 coins=coins%10;

 int c5=coins/5;
 coins=coins%5;

 int c1=coins;

 printf("NOTAS:\n");
 printf("%d nota(s) de R$ 100.00\n",import100);
 printf("%d nota(s) de R$ 50.00\n",import50);
 printf("%d nota(s) de R$ 20.00\n",import20);
 printf("%d nota(s) de R$ 10.00\n",import10);
 printf("%d nota(s) de R$ 5.00\n",import5);
 printf("%d nota(s) de R$ 2.00\n",import2);



 printf("MOEDAS:\n");
 printf("%d moeda(s) de R$ 1.00\n",c100);
 printf("%d moeda(s) de R$ 0.50\n",c50);
 printf("%d moeda(s) de R$ 0.25\n",c25);
 printf("%d moeda(s) de R$ 0.10\n",c10);
 printf("%d moeda(s) de R$ 0.05\n",c5);
 printf("%d moeda(s) de R$ 0.01\n",c1);



return 0;
}
