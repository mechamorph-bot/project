#include<stdio.h>
int main()
{
  char a[100];
  char b[100];


  printf("enter a string of character less than 100 with space:");
  gets(a);

  printf("\n you have entered\n");
  puts(a);


   printf("n enter a string of character less than 100 with space:");
  scanf("%s",&a);

  printf("\n you have entered\n");
  printf("%s",a);

}
