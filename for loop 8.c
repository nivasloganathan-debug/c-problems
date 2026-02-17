/******************************************************************************
8 Challenge Name
Reverse a Number
Description
Reverse the digits of a number using a for loop.
Problem Statement
Write a program to reverse the given number N using a for loop.
Input Format
Integer N
Constraints
1 ≤ N ≤ 100000
Output Format
Print the reversed number
Test Cases
Input: 123 → Output: 321
 Input: 100 → Output: 1
 Input: 9 → Output: 9
________________________________________


*******************************************************************************/
#include <stdio.h>
int main() {
    int N, reversed = 0;
    scanf("%d", &N);
    for (; N > 0; N /= 10) {
        int digit = N % 10;
        reversed = reversed * 10 + digit;
    }
    printf("%d\n", reversed);
    return 0;
}
