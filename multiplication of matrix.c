#include<stdio.h>
void main()
{  int a[10][10],b[10][10],m[10][10],r,c,i,j,k;
   printf("Enter the number of rows: ");
   scanf("%d",&r);
   printf("Enter the number of columns: ");
   scanf("%d",&c);
   printf("\nEnter the first matrix elements: \n");
   for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEnter the second matrix elements: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }
    printf("\nMultiplication of the matrices: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            m[i][j]=0;
            for(k=0;k<c;k++)
                m[i][j]+=a[i][k]*b[k][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",m[i][j]);
        }
    printf("\n");
    }
}

