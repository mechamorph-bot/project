#include<stdio.h>
int stringlenth(char a[])
{
    int size=0;
    while(a[size]!='\0')
    {
        size++;
    }
    return size;
}
int main()
{
    char b[]="hello";
    int c=stringlenth(b);
    printf("\n%d",c);
  return 0;
}
