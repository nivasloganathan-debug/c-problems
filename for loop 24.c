/******************************************************************************
24 Palindrome Number
Description
Check whether a number is palindrome.
Problem Statement
Write a program to check if the given number N is a palindrome using a for loop.
What is a Palindrome Number?
A palindrome number reads the same forward and backward.
 Example:
 121 → reverse is 121 → Palindrome
 123 → reverse is 321 → Not palindrome
Input Format
Integer N
Constraints
1 ≤ N ≤ 100000
Output Format
Print Yes or No
Test Cases
●	Input: 121 → Output: Yes

●	Input: 123 → Output: No

●	Input: 9 → Output: Yes


***************************************************************************/
#include <stdio.h>
int main() {
    int N, original, remainder, reverse = 0;
    scanf("%d", &N);
    original = N;
    for(; N != 0; ) {
        remainder = N % 10;          
        reverse = reverse * 10 + remainder;  
        N = N / 10;                 
    }

    if(original == reverse)
        printf("Yes");
    else
        printf("No");
    return 0;
}
