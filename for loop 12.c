/******************************************************************************
12 Challenge Name
Power of a Number
Description
Calculate power using for loop.
Problem Statement
Write a program to calculate N raised to the power P using a for loop.
Input Format
Two integers N and P
Constraints
1 ≤ N ≤ 10
 0 ≤ P ≤ 10
Output Format
Print the result
Test Cases
Input: 2 3 → Output: 8
 Input: 5 0 → Output: 1
 Input: 3 2 → Output: 9
******************************************************************************/
#include <stdio.h>
int main() {
    int N, P;
    int result = 1;
    scanf("%d %d", &N, &P);
    for (int i = 1; i <= P; i++) {
        result = result * N;
    }
    printf("%d", result);
    return 0;
}
