
/******************************************************************************
18 Greatest Common Divisor (GCD)
Description
Find the GCD of two numbers.
Problem Statement
Write a program to find the GCD of two integers using a for loop.
What is GCD?
The Greatest Common Divisor is the largest number that divides both numbers without remainder.
 Example:
 12 and 18
 Common divisors → 1, 2, 3, 6
 GCD = 6
Input Format
Two integers A and B
Constraints
1 ≤ A, B ≤ 1000
Output Format
Print the GCD
Test Cases
●	Input: 12 18 → Output: 6

●	Input: 5 10 → Output: 5

●	Input: 7 3 → Output: 1


 ***/
#include <stdio.h>
int main()
{
    int A, B, i, gcd = 1;
    scanf("%d %d", &A, &B);
    for(i = 1; i <= A && i <= B; i++)
    {
        if(A % i == 0 && B % i == 0)
        {
            gcd = i;
        }
    }
    printf("%d", gcd);
    return 0;
}
