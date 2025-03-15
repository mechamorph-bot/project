#include <stdio.h>
#include <string.h>

int main()
{
    char source[ ] = "fresh2refresh";
    char target[20]= "";
    printf("source = %s\n", source);//source = fresh2refresh
    printf("target = %s\n", target);//target =
    strcpy(target, source);
    printf("target after 1st strcpy( ) = %s\n", target);
    strcpy(target, "****************");
    printf("target after 2nd strcpy( ) = %s\n", target);
    strncpy(target, source, 6);
    printf("target after strncpy( ) = %s\n", target);
    target[6] = '\0';
    printf("target after target[6] = '\\0' = %s\n", target);
    return 0;
}
