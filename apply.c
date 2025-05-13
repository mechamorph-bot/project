#include<stdio.h>


void String();
void stringscanandprint();
int main()
{
    int x;
    scanf("%d",&x);
    switch(x)
    {
    case 1:String();
        break;


    case 2:stringscanandprint();
        break;


    case 3:;
        break;



    case 4:;
        break;


    default: printf("no option");

    }
}

void stringscanandprint()
{
    char a[1000];
    printf("enter your string:");
    getchar();
    gets(a);
    printf("%s\n",a);

    int b[100];
    printf("enter your string character by character :");
    for(int i=0;i<=10;i++)
    {
        scanf("%c",&b[i]);
    }

    for(int i=0;i<=10;i++)
    {
        printf("%c\n",b[i]);
    }

    return;
}


void String()
{
    char a[]="hello world!";
    printf("%c\n",a[0]);
    printf("%s\n",a);
    a[0]='j';
    printf("%s\n",a);



    return;
}
