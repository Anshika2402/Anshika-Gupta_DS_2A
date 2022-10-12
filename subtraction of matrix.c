#include<stdio.h>
void main()
{  int a[10][10],b[10][10],s[10][10],r,c,i,j;
   printf("Subtraction of matrices: \n\n");
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
    for (i=0;i<r;++i)
    {
        for (j=0;j<c;++j)
            s[i][j]=a[i][j]-b[i][j];
    }
  printf("\nSubtraction of two matrices: \n");
  for (i=0;i<r;++i)
    for (j=0;j<c;++j)
    {
      printf("%d\t",s[i][j]);
      if (j==c-1)
        printf("\n");
    }
}

