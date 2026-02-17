
/******************************************************************************
15 Challenge Name
Count Prime Numbers
Description
Count prime numbers between 1 and N.
Problem Statement
Write a program to count how many prime numbers exist between 1 and N using a for loop.
Input Format
Integer N
Constraints
2 ≤ N ≤ 1000
Output Format
Print count of prime numbers
Test Cases
Input: 10 → Output: 4
 Input: 5 → Output: 3
 Input: 2 → Output: 1
 ***/
#include <stdio.h>
int main() {
    int N, i, j, count = 0, isPrime;
    scanf("%d", &N);
    for(i = 2; i <= N; i++) {
        isPrime = 1; 
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
