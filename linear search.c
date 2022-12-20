#include <stdio.h>
void main()
{   int n,i,k,f=0;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    for (i=0;i<n;i++)
    {   if (k==a[i])
        {
            f=1;
            break;
        }
    }
    if (f==1)
        printf("Element is present at %d position.",i+1);
    else
        printf("Element is not present.");
}
