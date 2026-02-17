/******************************************************************************

Challenge Name
Factorial Calculator
7 Challenge Name
Sum of Even Numbers
Description
Find the sum of all even numbers from 1 to N.
Problem Statement
Write a program to calculate the sum of all even numbers between 1 and N using a for loop.
Input Format
Integer N
Constraints
1 ≤ N ≤ 1000
Output Format
Print the sum
Test Cases
Input: 10 → Output: 30
 Input: 5 → Output: 6
 Input: 2 → Output: 2
______________________________

*******************************************************************************/
#include <stdio.h>
int main() {
    int N, i;
    int sum = 0;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}
