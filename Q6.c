//Program to check whether it is palindrome using recursion

#include <stdio.h>
#include <math.h>

int reverse(int num);
int isPalindrome(int num);

void main()
{
    int n;
    printf("Enter any number :");
    scanf("%d", &n);
    
    if(isPalindrome(n) == 1)
        printf("%d is palindrome number.\n", n);
    else
        printf("%d is NOT palindrome number.\n", n);
}

int isPalindrome(int num)
{
    if(num == reverse(num))
        return 1;
    
    return 0;
}

int reverse(int num)
{
    int digit = (int)log10(num);
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}