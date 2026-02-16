/******************************************************************************
5 Challenge Name
Countdown Timer
Description
Print numbers from N to 1.
Problem Statement
Create a countdown using for loop.
Input Format
Integer N
Constraints
1 ≤ N ≤ 100
Output Format
Print countdown
Test Cases
Input: 5 → Output: 5 4 3 2 1
 Input: 1 → Output: 1
 Input: 3 → Output: 3 2 1


__________________________________

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i = N; i >= 1; i--) {
        printf("%d ", i);
    }
    return 0;
}
