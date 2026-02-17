/******************************************************************************
Challenge Name
Count Digits
Description
Count the number of digits in a number.
Problem Statement
Write a program to count how many digits are present in the given number N using a for loop.
Input Format
Integer N
Constraints
1 ≤ N ≤ 100000
Output Format
Print digit count
Test Cases
Input: 123 → Output: 3
 Input: 9 → Output: 1
 Input: 1000 → Output: 4


*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int count = 0;
    scanf("%d", &N);
    for(; N != 0; N = N / 10) {
        count++;
    }
    printf("%d", count);
    return 0;
}
