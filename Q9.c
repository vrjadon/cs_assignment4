//Program to find HCF of 2 numbers using recursion

#include<stdio.h>

int hcf(int a, int b);
void main()
{
    int num1, num2, h;
    printf("Enter any two numbers to find HCF :");
    scanf("%d %d", &num1, &num2);
    h = hcf(num1, num2);
    printf("HCF of %d and %d = %d", num1, num2, h);
}

int hcf(int a, int b)
{
    if(b == 0)
        return a;
    else
        return hcf(b, a%b); 
}