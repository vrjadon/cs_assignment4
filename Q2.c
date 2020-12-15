//Program to print odd and even numbers using recursion

#include <stdio.h>
void printEvenOdd(int cur, int limit);
void main()
{
    int lowerLimit, upperLimit;
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    printf("Even/odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    printEvenOdd(lowerLimit, upperLimit); 
}


void printEvenOdd(int cur, int limit)
{
    if(cur > limit)
        return;
    printf("%d, ", cur);
    printEvenOdd(cur + 2, limit);
}