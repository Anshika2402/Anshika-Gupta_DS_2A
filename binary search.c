#include <stdio.h>
void main()
{
    int i,x,y,m,n,k,a[100];
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    y=0;
    x=n-1;
    m=(x+y)/2;
    while (y<=x)
    {
        if(a[m]<k)
            y=m+1;
        else if (a[m]==k)
        {
            printf("Element %d is present at %d position.",k,m+1);
            break;
        }
        else
            x=m-1;
            m=(x+y)/2;
    }
    if(y>x)
        printf("Element %d is not present in array.",k);
}
