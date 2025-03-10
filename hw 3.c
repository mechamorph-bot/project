#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[m][n];
    for(int i=0;i<m;i++)
      {
       for(int j=0;j<n;j++)
            scanf("%d\n",&a[i][j]);

      }
      int x;
      scanf("%d",&x);
      int found=0;
      for(int i=0;i<m;i++)
      {
          for(int j=0;j<n;j++)
          {
              if(a[i][j]==x)
                {
                printf("Element %d found at position\n",x);
                printf("(%d,%d)\n",i,j);
                found=1;
                }

          }
      }
     if(!found)
                {
                    printf("Element not found");
                }

}
