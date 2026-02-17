/******************************************************************************
10 Challenge Name
Fibonacci Series
Description
Print first N Fibonacci numbers.
Problem Statement
Write a program to print the Fibonacci series up to N terms using a for loop.
Input Format
Integer N
Constraints
1 ≤ N ≤ 20
Output Format
Print Fibonacci series
Test Cases
Input: 5 → Output: 0 1 1 2 3
 Input: 1 → Output: 0
 Input: 2 → Output: 0 1


******************************************************************************/
#include <stdio.h>

int main() {
    int N;
    int a = 0, b = 1, next;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d ", a);
        } 
        else if (i == 2) {
            printf("%d ", b);
        } 
        else {
            next = a + b;
            printf("%d ", next);
            a = b;
            b = next;
        }
    }

    return 0;
}
