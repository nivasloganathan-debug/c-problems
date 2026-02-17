/******************************************************************************

Challenge Name
Factorial Calculator
Description
Calculate the factorial of a given number using a for loop.
Problem Statement
Write a program to calculate the factorial of a number N using a for loop.
 Factorial of N is the product of all numbers from 1 to N.
Input Format
Integer N
Constraints
1 ≤ N ≤ 10
Output Format
Print the factorial of N
Test Cases
Input: 5 → Output: 120
 Input: 3 → Output: 6
 Input: 1 → Output: 1
________________________________________

*******************************************************************************/
#include <stdio.h>
int main() {
    int N, i;
    int factorial = 1;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}
