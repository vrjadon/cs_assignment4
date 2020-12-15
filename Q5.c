//Program to find the reverse of any number using recursion

#include<stdio.h>
#include<math.h>

int reverse(int n);
void main()
{
    int n,r;
    printf("Enter the Original Number :");
    scanf("%d",&n);
    r = reverse(n);
    printf("Reversed Number :%d",r);
}

reverse(int n)
{
    int digit = (int)log10(n);
    if(n==0)
        return 0;
    return ((n%10 * pow(10,digit)) + reverse(n/10));   
}