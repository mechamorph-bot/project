#include<stdio.h>
int main()
{
  int a[100];
   a[0]=2;
   a[1]=3;
   a[2]=4;
   a[3]=5;
   a[4]=6;
   a[5]=7;
   a[6]=8;
   printf("%lu\n",sizeof(a));
   int length = sizeof(a)/sizeof(a[0]);
   printf("%d",length);
   return 0;

}
