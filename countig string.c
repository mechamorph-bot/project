#include<stdio.h>
int main()
{
    char a[20]="i love bangladesh";
    printf("%s",a);
    int i=0,count=0;
    while(a[i]!='\0')
    {
       if(a[i]!=' '){
        count++;

       }
       i++;
    }

    printf("\n%s string has %d character in it",a,count);

}
