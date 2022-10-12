#include <stdio.h>
void main()
{
    int i,j,r,c,k,a[50][50],t[50][50];
    printf("Enter no. of rows and columns: \n");
    scanf("%d%d",&r,&c);
    printf("Elements added: ");
    for (i=0;i<r;++i)
    {   for (j=0;j<c;++j)
        scanf("%d",&a[i][j]); }
    for (i=0;i<r;++i)
    {   for (j=0;j<c;++j)
            t[j][i]=a[i][j]; }
    printf("\nTranspose by Anshika Gupta:\n");
    for (i=0;i<c;++i)
    {   for (j=0;j<r;++j)
        {
            printf("%d ",t[i][j]);
        if (j==r-1)
            printf("\n");
        }
    }
}
