/******************************************************************************
Challenge Name
Multiplication Table
Description
Print multiplication table of a given number.
Problem Statement
Print table of N from 1 to 10.
Input Format
Integer N
Constraints
1 ≤ N ≤ 20
Output Format
Print table lines
Test Cases
Input: 5 → Output: 5 10 15 20 25 30 35 40 45 50
 Input: 1 → Output: 1 2 3 4 5 6 7 8 9 10
 Input: 3 → Output: 3 6 9 12 15 18 21 24 27 30
________________________________________

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= 10; i++) {
        printf("%d ", N * i);
    }
    return 0;
}
