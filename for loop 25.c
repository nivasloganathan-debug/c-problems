/******************************************************************************
25 Armstrong Number
Description
Check whether a number is an Armstrong number.
Problem Statement
Write a program to check if the given number N is an Armstrong number using a for loop.
What is an Armstrong Number?
An Armstrong number is a number where the sum of each digit raised to the power of number of digits equals the number itself.
 Example (3-digit):
 153 → 1³ + 5³ + 3³
 = 1 + 125 + 27 = 153
Input Format
Integer N
Constraints
1 ≤ N ≤ 1000
Output Format
Print Yes or No
Test Cases
●	Input: 153 → Output: Yes

●	Input: 370 → Output: Yes

●	Input: 123 → Output: No




***************************************************************************/
#include <stdio.h>
#include <math.h>
int main() {
    int N, original, temp, digits = 0;
    int remainder;
    int sum = 0;
    scanf("%d", &N);
    original = N;
    temp = N;
    for(; temp != 0; temp = temp / 10) {
        digits++;
    }

    temp = N;
    for(; temp != 0; temp = temp / 10) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
    }

    if(sum == original)
        printf("Yes");
    else
        printf("No");
    return 0;
}
