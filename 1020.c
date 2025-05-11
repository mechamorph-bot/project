#include<stdio.h>
int main()
{
 int x;
 scanf("%d",&x);

 int xyear=x/365;
 x=x%365;

 int xmonth=x/30;
 x=x%30;

 int xday=x;

 printf("%d ano(s)\n",xyear);
 printf("%d mes(s)\n",xmonth);
 printf("%d dia(s)\n",xday);

 return 0;
}
