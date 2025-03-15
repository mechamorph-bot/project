#include<stdio.h>
int stringlenth(char a[]);
int stringCompare(char a[],char b[]);
void stringcopy(char x[],char y[]);
void stringconcat(char a[].char b[])
{
    int i=0;
    for(i=0;i<a[i];i++)
    {

    }
}
int main()
{


    char b[]="hello";
    char a[]="hello";
    char d[100];
    printf("string b is copied to srting d which is %s\n",a,d);
    if(stringCompare(a,b))
    {
        printf("strings are equal\n");
    }
    else
    {
        printf("strings are not equal\n");
    }
     int c=stringlenth(b);
    printf("\n%d",c);

  return 0;
}
void stringcopy(char x[],char y[])
{
    int i=0;
    while(y[i]!='\0')
    {
        y[i]=x[i];
        i++;
    }
    y[i]='\0';
}
int stringCompare(char a[],char b[])
{
    int isequal=1;
    if(stringlenth(a)!=stringlenth(b))
    {
        isequal=0;
    }
    if(stringlenth(a)==stringlenth(b))
    {
        for(int i=0;i<stringlenth(a);i++)
        {
            if(a[i]!=b[i])
            {
            isequal=0;
            break;
            }
        }
    }

    return isequal;
}
int stringlenth(char a[])
{
    int size=0;
    while(a[size]!='\0')
    {
        size++;
    }
    return size;
}
