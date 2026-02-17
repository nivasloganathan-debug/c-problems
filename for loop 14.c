/******************************************************************************
14 Challenge Name
Count Even Digits
Description
Count even digits in a number.
Problem Statement
Write a program to count how many even digits are present in the given number N using a for loop.
Input Format
Integer N
Constraints
1 ≤ N ≤ 100000
Output Format
Print the count
Test Cases
Input: 1234 → Output: 2
 Input: 246 → Output: 3
 Input: 135 → Output: 0
  give  me for loop in c program

******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int count = 0;
    scanf("%d", &N);
    for (int i = N; i > 0; i = i / 10) {
        int digit = i % 10;

        if (digit % 2 == 0) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
