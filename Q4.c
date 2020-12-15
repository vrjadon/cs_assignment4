//Program to find sum of even/odd numbers using recursion

#include <stdio.h>
int sumOfEvenOdd(int start, int end);
void main()
{
    int start, end, sum;
printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("Sum of even/odd numbers between %d to %d = %d\n", start, end, sumOfEvenOdd(start, end));
}

int sumOfEvenOdd(int start, int end) 
{
    /* Base condition */
    if(start > end)
        return 0;
    else
        return (start + sumOfEvenOdd(start + 2, end));
}