//Program to find sum of natural numbers using recursion

#include<stdio.h>
int nat_sum(int l, int u);
void main()
{
    int low, upp, sum;
    printf("Enter the lower limit :");
    scanf("%d",&low);
    printf("Enter the upper limit :");
    scanf("%d",&upp);
    sum = nat_sum(low,upp);
    printf(" Sum of Natural Numbers in given range =%d",sum);
}

int nat_sum(int l, int u)
{
    if(l==u)
        return l;
    else
        return l + nat_sum(l+1, u);
}