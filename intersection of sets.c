#include<stdio.h>
void main()
{
    int a[100],b[100],c[100],x,y,n,k=0,i,j;
    printf("Enter number of element of set A\n");
    scanf("%d",&x);
    printf("Enter elements of set A\n");
    for(i=0;i<x;i++)
      scanf("%d",&a[i]);
    printf("Enter number of element of set B\n");
    scanf("%d",&y);
    printf("Enter elements of set B\n");
    for( i=0;i<y;i++)
      scanf("%d",&b[i]);
    for( i=0;i<x;i++)
    {
         for(j=0;j<y;j++)
         {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
         }
    }
    printf("Intersection of set A and set B by ANSHIKA GUPTA is:\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
}
