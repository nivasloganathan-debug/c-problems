
/******************************************************************************
19 Least Common Multiple (LCM)
Description
Find the LCM of two numbers.
Problem Statement
Write a program to find the LCM of two integers using a for loop.
What is LCM?
The Least Common Multiple is the smallest number that is divisible by both numbers.
 Example:
 4 and 6
 Common multiples → 12, 24…
 LCM = 12
Input Format
Two integers A and B
Constraints
1 ≤ A, B ≤ 1000
Output Format
Print the LCM
Test Cases
●	Input: 4 6 → Output: 12

●	Input: 5 10 → Output: 10

●	Input: 3 7 → Output: 21


 ***/
#include <stdio.h>
int main()
{
    int A, B, i, lcm;
    scanf("%d %d", &A, &B);
    for(i = (A > B ? A : B); i <= A * B; i++)
    {
        if(i % A == 0 && i % B == 0)
        {
            lcm = i;
            break;   
        }
    }
    printf("%d", lcm);
    return 0;
}
