/******************************************************************************
21 Binary to Decimal Conversion
Description
Convert binary number to decimal.
Problem Statement
Write a program to convert a binary number into its decimal equivalent using a for loop.
What is Binary to Decimal?
Binary numbers use base-2 (0 and 1).
 Decimal numbers use base-10.
 Example:
 Binary 101
 = (1×2²) + (0×2¹) + (1×2⁰)
 = 4 + 0 + 1 = 5
Input Format
Integer N (binary)
Constraints
N contains only 0s and 1s
Output Format
Print decimal value
Test Cases
●	Input: 101 → Output: 5

●	Input: 10 → Output: 2

●	Input: 1 → Output: 1  


***************************************************************************/
#include <stdio.h>
#include <math.h>
int main() {
    long long int binary;
    int decimal = 0, remainder, i = 0;
    scanf("%lld", &binary);
    for(i = 0; binary != 0; i++) {
        remainder = binary % 10;          
        decimal += remainder * pow(2, i); 
        binary = binary / 10;             
    }
    printf("%d", decimal);
    return 0;
}
