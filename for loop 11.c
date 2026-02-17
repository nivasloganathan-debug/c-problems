/******************************************************************************
11 Challenge Name
Sum of Digits
Description
Find the sum of digits of a number.
Problem Statement
Write a program to calculate the sum of all digits in the given number N using a for loop.
Input Format
Integer N
Constraints
1 ≤ N ≤ 100000
Output Format
Print the sum of digits
Test Cases
Input: 123 → Output: 6
 Input: 405 → Output: 9
 Input: 9 → Output: 9

******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int sum = 0;
    scanf("%d", &N);

    for (int i = N; i > 0; i = i / 10) {
        sum = sum + (i % 10);
    }
    printf("%d", sum);
    return 0;
}
