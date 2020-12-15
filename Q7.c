//Program to find sum of digits using recursion

#include<stdio.h>

int sumOfDigits(int num);
void main()
{
    int n, sum;
    
    printf("Enter The Number :");
    scanf("%d", &n);
    sum = sumOfDigits(n);
    printf("Sum of digits of %d = %d", n, sum);
}

int sumOfDigits(int num)
{
    if(num == 0)
        return 0;
        
    return ((num % 10) + sumOfDigits(num / 10));
}