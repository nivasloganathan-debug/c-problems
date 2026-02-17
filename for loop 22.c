/******************************************************************************
22 Prime Numbers Counter
Description
Count how many prime numbers exist from 1 to N.
Problem Statement
Write a program to count the total number of prime numbers between 1 and N using a for loop.
What is a Prime Number?
A prime number has exactly two divisors: 1 and itself.
👉 Example:
 Primes up to 10 → 2, 3, 5, 7
 Count = 4
Input Format
Integer N
Constraints
2 ≤ N ≤ 1000
Output Format
Print the count of prime numbers
Test Cases
●	Input: 10 → Output: 4

●	Input: 5 → Output: 3

●	Input: 2 → Output: 1

________________________________________

***************************************************************************/
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
