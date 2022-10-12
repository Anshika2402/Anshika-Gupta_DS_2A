#include <stdio.h>
void main()
{
    int ba,i,j,k,l1,l2,l3,u1,u2,u3,w,a;
    printf("Enter base address: ");
    scanf("%d",&ba);
    printf("Enter i: ");
    scanf("%d",&i);
    printf("Enter j: ");
    scanf("%d",&j);
    printf("Enter k: ");
    scanf("%d",&k);
    printf("Enter lower bound of 1st: ");
    scanf("%d",&l1);
    printf("Enter lower bound of 2nd: ");
    scanf("%d",&l2);
    printf("Enter lower bound of 3rd: ");
    scanf("%d",&l3);
    printf("Enter upper bound of 1st: ");
    scanf("%d",&u1);
    printf("Enter upper bound of 2nd: ");
    scanf("%d",&u2);
    printf("Enter upper bound of 3rd: ");
    scanf("%d",&u3);
    printf("Enter words per cell: ");
    scanf("%d",&w);
    a=ba+(((k-l3)*(u2-l2+1)*(u1-l1+1)+(j-l2)*(u1-l1+1)+(i-l1)))*w;
    printf("Address: %d",a);
}
