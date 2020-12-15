//Program to find LCM using recursion

#include <stdio.h>
int lcm(int a, int b);
void main()
{
    int num1, num2, LCM;
    printf("Enter any two numbers to find LCM :");
    scanf("%d %d", &num1, &num2);
    
    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
        
    printf("LCM of %d and %d = %d", num1, num2, LCM);
}

int lcm(int a, int b)
{
    static int multiple = 0;
    multiple += b;
    
    if((multiple % a == 0) && (multiple % b == 0))
        return multiple;
    else 
        return lcm(a, b);
}