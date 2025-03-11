#include<stdio.h>
#include <string.h>
int main()
{
    int x;
    printf("Enter the string length you want:");
    scanf("%d",&x);
    char a[x];
    printf("Enter your string:");
    scanf("%s",a);
    if(a[x]!=x)
    {
        printf("you have entered long string");
        return main();
    }
    int i=0,count=0;
    while(a[i]!='\0')
    {
        if(a[i]!=' ')
        count++;
        i++;

    }
    printf("%s has %d character including white space",a,count);

}
