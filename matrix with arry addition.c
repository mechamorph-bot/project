#include<stdio.h>
int main()
{
    int a,b,x,y,i,j;
    printf("enter the row number for first matrix:");
    scanf("%d",&a);
    printf("enter the coloum number for first matrix:");
    scanf("%d",&b);
    printf("enter the row number for second matrix:");
    scanf("%d",&x);
    printf("enter the colum number for second matrix:");
    scanf("%d",&y);
    if(a!=x||b!=y)
    {
        printf("invalid matricx");
        return 0;
    }
    int p[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("p[%d][%d]",i,j);
            scanf("%d",&p[i][j]);
        }
        printf("\n");
    }
    int q[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("q[%d][%d]",i,j);
            scanf("%d",&q[i][j]);


}
printf("\n");
}
int c[100][100];
for(i=0;i<x;i++){
        for(j=0;j<y;j++){
          c[i][j]=p[i][j]+q[i][j];

    }
    printf("\n");
}
printf("Result:\n");
for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d \t",c[i][j]);
    }
    printf("\n");
}
return main();
}
