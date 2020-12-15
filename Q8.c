//Program to generate nth fibonacci term of a series

#include <stdio.h>

unsigned long long fibo(int num);
void main()
{
    int n;
    unsigned long long f;
    printf("Enter the nth term to find :");
    scanf("%d", &n);
    f = fibo(n); 
    printf("%d fibonacci term is %llu", n, f);
}

unsigned long long fibo(int num) 
{
    if(num == 0)
        return 0;
    else if(num == 1) 
        return 1;
    else 
        return fibo(num-1) + fibo(num-2); 
}