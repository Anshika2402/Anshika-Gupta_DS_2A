#include <stdio.h>
void main()
{
    int a[10][10],r,c,det;
    printf("Enter elements in matrix: \n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
    printf("Determinant of matrix A = %d",det);
}
