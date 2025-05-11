#include <stdio.h>

int main() {
 int x;
 scanf("%d",&x);
 int hour=x/3600;
 x=x%3600;

 int minute=x/60;
 x=x%60;

  int second=x;

  printf("%d:%d:%d\n",hour,minute,second);

    return 0;
}
