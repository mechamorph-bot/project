#include<stdio.h>
int main()
{
    int A,B,C,D;
    scanf("%d %d %d %d",&A, &B, &C, &D);
    int X=C+D;
    int Y=A+B;
    if(B>C && D>A && X>Y && A%2==0 && C>0 && D>0)
    {
        printf("Valores aceitos\n");
    }
    else
        {
            printf("Valores nao aceitos\n");

        }

        return 0;

}
