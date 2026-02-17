
/******************************************************************************
20 Sum of Squares Series
Description
Calculate sum of square series.
Problem Statement
Write a program to calculate the sum
 1² + 2² + 3² + … + N² using a for loop.
Explanation
Each number from 1 to N is squared and added to the total sum.
 Example:
 N = 3
 1² + 2² + 3² = 1 + 4 + 9 = 14
Input Format
Integer N
Constraints
1 ≤ N ≤ 1000
Output Format
Print the sum
Test Cases
●	Input: 3 → Output: 14

●	Input: 1 → Output: 1

●	Input: 5 → Output: 55
 ***/
#include <stdio.h>
int main()
{
    int N, i;
    int sum = 0;
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        sum = sum + (i * i);   
    }
    printf("%d", sum);
    return 0;
}
