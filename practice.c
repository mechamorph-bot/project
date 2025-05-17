#include<stdio.h>
int main()
{
    int A[100][100];
    int B[100][100];
    int C[100][100];
    int i,j,rowA,rowB,columA,columB;

    printf("enter the row of A");
    scanf("%d",&rowA);

    printf("enter the colum of A");
    scanf("%d",&columA);

    printf("enter the row of B");
    scanf("%d",&rowB);

    printf("enter the colum of B");
    scanf("%d",&columB);

    if(columA != rowB)
    {
        printf("invalid matrix");
        return;
    }

    for(i=0;i<rowA;i++)
    {
        for(j=0;j<columA;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    for(i=0;i<rowB;i++)
    {
        for(j=0;j<columB;j++)
        {
            printf("B[%d][%d]",i,j);
            scanf("%d",&B[i][j]);
        }
    }

  for(i=0;i<rowA;i++)
  {
      for(j=0;j<columB;j++)
      {
         int sum = 0;
          for(int k=0;k<columA;k++)
          {
              sum+=A[i][k]*B[k][j];
              C[i][j]=sum;
          }
      }
  }
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<columB;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }





   return 0;
}
