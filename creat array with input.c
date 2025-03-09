#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("enter the row;");
    scanf("%d",&a);
    printf("enter the coloum;");
    scanf("%d",&b);
    int x[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
        printf("enter element for x[%d][%d]:",i,j);
        scanf("%d",&x[i][j]);
        }
        printf("\n");
    }
    printf("\nthe matrix is\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d \t",x[i][j]);
        }
        printf("\n");
    }
}
