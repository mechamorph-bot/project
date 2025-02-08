#include<stdio.h>
 int main()
 {
 float a,b;
 printf("Enter the first value:");
 scanf("%f",&a);
 printf("Enter the second value:");
 scanf("%f",&b);
 char x,y;
 printf("Enter the oparatio you want to execute:(+'-,*,/)");
 scanf("%c",&x);
 scanf("%c",&y);
 if(y=='+')
 {
 printf("%f",a+b);
 }
 else if(y=='-')
 {
 printf("%f",a-b);
 }
 else if(y=='/')
 {
 printf("%f",a/b);
 }
 else if(y=='*')
 {
 printf("%f",a*b);
 }
 else
 {
 printf("You have a given a invalid input");
 }
 return 0;
 }
