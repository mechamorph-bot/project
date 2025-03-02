#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==y)
    {
        printf("THE GAME LASTED 24 HOUR(S)");
    }
    if(x!=y && x>=0 && x<=24 &&  y<=24 && y>=0)
    {
        if(x<y){
            printf("THE GAME LASTED %d HOUR(S)",(y-x));}
        if(x>y){
            printf("THE GAME LASTED %d HOUR(S)",((24-x)+y));
        }

    }
    else{
       printf("YOU HAVE ENTRED A INVALID TIME");}
       return 0;
}



