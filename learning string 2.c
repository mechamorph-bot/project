#include<stdio.h>
#include<string.h>
int main()
{
    char dest[15];
    strcpy(dest, "test string");
    puts(dest);

    char src[15];
    strncpy(src, "test string",6);
    src[6]='\0';
    puts(src);

}
