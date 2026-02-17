/******************************************************************************
23 Prime Number Check
Description
Check whether a number is prime.
Problem Statement
Write a program to check if a given number N is a prime number using a for loop.
Explanation
If N has only two divisors (1 and N), it is prime.
 Otherwise, it is not prime.
Input Format
Integer N
Constraints
2 ≤ N ≤ 1000
Output Format
Print Prime or Not Prime
Test Cases
●	Input: 7 → Output: Prime

●	Input: 4 → Output: Not Prime

●	Input: 2 → Output: Prime


________________________________________

***************************************************************************/
#include <stdio.h>
int main() {
    int N, i, isPrime = 1;
    scanf("%d", &N);
    for(i = 2; i <= N / 2; i++) {
        if(N % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 1)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
