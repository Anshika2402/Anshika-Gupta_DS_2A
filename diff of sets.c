#include<stdio.h>
void main()
{
    int x,y,l,i,j,a[10],b[10],c[10],d[10],m=0,k=0;
    printf("Enter size of set A: ");
    scanf("%d",&x);
    printf("Enter elements of set: \n");
    for( i=0;i<x;i++)
    scanf("%d",&a[i]);
    printf("Enter size of set B: ");
    scanf("%d",&y);
    printf("Enter elements of set: \n");
    for( i=0;i<y;i++)
    scanf("%d",&b[i]);
    for( i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==y)
        {
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }

    }
    for( i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==x)
        {
            for(l=0;l<m;l++)
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==m)
            {
                d[m]=b[i];
                m++;
            }
        }

    }
     printf("Difference of A-B by ANSHIKA GUPTA is:\n");
     for(i=0;i<k;i++)
     {
         printf("%d ",c[i]);
     }
     printf("\n");
     printf("Difference of B-A is: \n");
     for(i=0;i<m;i++)
     {
         printf("%d ",d[i]);
     }
}
