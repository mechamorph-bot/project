#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("\ncapital letters\n");
    else
       printf("you may have entered a wrong input");
    return 0;
}
