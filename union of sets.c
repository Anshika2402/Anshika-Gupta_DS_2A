#include<stdio.h>
void main()
{
   int a[10],b[10],i,c[10],j,k=0,x,y;
   printf("Enter number of  element of set A\n");
   scanf("%d",&x);
   printf("Enter the element of set A \n");
   for(i=0;i<x;i++)
      scanf("%d",&a[i]);
   printf("Enter number of element of set B\n");
   scanf("%d",&y);
   printf("Enter the element of set B \n");
   for(i=0;i<y;i++)
     scanf("%d",&b[i]);
   for(i=0;i<x;i++)
   {
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i])
            break;
       }
       if(j==k)
       {
          c[k]=a[i];
          k++;
       }
    }
   for(i=0;i<y;i++)
   {
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k)
     {
       c[k]=b[i];
       k++;
     }
   }
   printf("Union of set A and B by ANSHIKA GUPTA is:\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
}
