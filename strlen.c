#include <stdio.h>
#include <string.h>

int main()
{
    char a[100] = "I love Bangladesh";
    int n;

    n = strlen("Hello world");
    printf("Length of Hello world = %d\n",n);
    n = strlen(a);
    printf("Length of %s = %d\n",a, n);
    gets(a);
    n = strlen(a);
    printf("Length of %s = %d\n",a, n);
    return 0;
}
