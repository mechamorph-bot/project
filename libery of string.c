#include<stdio.h>
int stringlenth(char a[]);
int stringCompare(char a[],char b[]);
void stringcopy(char x[],char y[]);
void stringConcat(char a[],char b[]);
int stringsearch(char a[],char ch)
{
    int isfound =0;
    int i=0;
    while(a[i]!=0)
    {
        if(a[i]==ch)
        {
            isfound=1;
            break;
        }
        i++;
    }
    return isfound;
}
int main()
{
    char b[100]="hello";
    char a[100]="hello";
    char d[100];
    char x;
    printf("enter what you want to search:");
    scanf("%c",&x);
    if(stringsearch(a,x))
    {
        printf("character found\n");

    }
    else{
        printf("not found\n");
    }



    stringConcat(a,b);
    printf("concated strins is : %s\n",a);




    stringcopy(b,d);
    printf("string b is copied to srting d which is %s\n",d);



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
void stringConcat(char a[],char b[])
{
    int p =stringlenth(a);
    a[p]=' ';
    p++;
    int i=0;
    while(b[i] !='\0')
    {
        a[p]=b[i];
        p++;
        i++;
    }
    a[p]='\0';
}
void stringcopy(char x[],char y[])
{
    int i=0;
    while(x[i]!='\0')
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
