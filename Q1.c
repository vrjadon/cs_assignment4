//Program to natural numbers using function

#include<stdio.h>
void natural(int n);
void main()
{
    int n;
    printf("Enter the Limit :");
    scanf("%d",&n);
    natural(n);
}

void natural(int n)
{
    int i;
    printf("Natural Numbers upto %d:",n);
    for(i=1; i<=n; i++)
        printf("\n%d",i);
}
