#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the row count of first matrix:");
    scanf("%d",&x);
    printf("enter the column count of first matrix:");
    scanf("%d",&y);
    int a,b;
    printf("enter the row count of second matrix:");
    scanf("%d",&a);
    printf("enter the column count of second matrix:");
    scanf("%d",&b);

    int p[x][y],q[a][b];
    if(y!=a)
    {
        printf("the column number of first matrix has to be equal to second matrix's row\n\n");
        return main();
    }
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("enter the element p[%d][%d]:",i,j);
            scanf("%d",&p[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("enter the element q[%d][%d]:",i,j);
            scanf("%d",&q[i][j]);
        }
        printf("\n");
    }
    int r[x][b];
    for(i=0;i<x;i++)
    {
        for(j=0;j<b;j++)
        {
            int sum=0;
            for (int k=0;k<y;k++)
            {
                sum +=p[i][k]*q[k][j];

            }
             r[i][j]=sum;

        }
    }
printf("result\n");
   for(i=0;i<x;i++)
  {
      for(j=0;j<b;j++)
      {
          printf("%d ",r[i][j]);
      }
      printf("\n");
  }
return main();
}
