/******************************************************************************

Challenge Name
Sum of First N Numbers
Description
Calculate sum of first N natural numbers using for loop.
Problem Statement
Find the sum of numbers from 1 to N.
Input Format
Integer N
Constraints
1 ≤ N ≤ 1000
Output Format
Print the sum
Test Cases
Input: 5 → Output: 15
 Input: 10 → Output: 55
 Input: 1 → Output: 1
Explanation
 Adds all numbers from 1 to N.
________________________________________

*******************************************************************************/
#include <stdio.h>
int main() {
    int N, sum = 0;
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++) {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
