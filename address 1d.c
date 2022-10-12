#include <stdio.h>
void main()
{
    int ba,i,l,w,a;
    printf("Enter base address: ");
    scanf("%d",&ba);
    printf("Enter i-row: ");
    scanf("%d",&i);
    printf("Enter lower bound: ");
    scanf("%d",&l);
    printf("Enter words per cell: ");
    scanf("%d",&w);
    a=ba+(i-l)*w;
    printf("Address: %d",a);
}
