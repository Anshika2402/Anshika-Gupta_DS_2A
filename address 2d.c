#include <stdio.h>
void main()
{
    int ba,i,j,l1,l2,u1,u2,w,a;
    printf("Enter base address: ");
    scanf("%d",&ba);
    printf("Enter i-row: ");
    scanf("%d",&i);
    printf("Enter j-col: ");
    scanf("%d",&j);
    printf("Enter lower bound of 1st: ");
    scanf("%d",&l1);
    printf("Enter lower bound of 2nd: ");
    scanf("%d",&l2);
    printf("Enter upper bound of 1st: ");
    scanf("%d",&u1);
    printf("Enter upper bound of 2nd: ");
    scanf("%d",&u2);
    printf("Enter words per cell: ");
    scanf("%d",&w);
    a=ba+((j-l2)*(u1-l1+1)+(i-l1))*w;
    printf("Address: %d",a);
}
