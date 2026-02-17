/******************************************************************************
13 Challenge Name
Sum of Multiples
Description
Find sum of multiples of a number.
Problem Statement
Write a program to calculate the sum of all multiples of a given number M up to N using a for loop.
Input Format
Two integers M and N
Constraints
1 ≤ M ≤ N ≤ 1000
Output Format
Print the sum
Test Cases
Input: 3 10 → Output: 18
 Input: 5 20 → Output: 50
 Input: 2 6 → Output:12

******************************************************************************/
#include <stdio.h>
int main() {
    int M, N;
    int sum = 0;
    scanf("%d %d", &M, &N);
    for (int i = M; i <= N; i += M) {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
