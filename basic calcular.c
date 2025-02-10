#include<stdio.h>
 int main()
 {
     int x;
     printf("Enter the passwoard:");
     scanf("%d",&x);
     if(x=1234)
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
        }
        else
        {
            printf("You have entred the wrong passoward");
        }
 return 0;
 }
