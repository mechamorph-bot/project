#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[50] = "Hi", str2[50];
    strcpy (str2,"The");
    strncat (str1, str2, 2);
    strcpy(str2, "underdog");
    strncat (str1, str2, 5);
    strncat(str1, "catches up", 3);
    strncat(str1, "swiftly", 1);
    printf("%s", str1);
    return 0;
}






