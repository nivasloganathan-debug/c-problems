
/******************************************************************************
17 Strong Number Check
Description
Check whether a number is a strong number.
Problem Statement
Write a program to check if the given number N is a strong number using a for loop.
What is a Strong Number?
A strong number is a number whose sum of factorials of its digits is equal to the number itself.
Example:
 145 → 1! + 4! + 5!
 = 1 + 24 + 120 = 145 → Strong number
Input Format
Integer N
Constraints
1 ≤ N ≤ 1000
Output Format
Print Yes or No
Test Cases
●	Input: 145 → Output: Yes

●	Input: 2 → Output: Yes

●	Input: 123 → Output: No 

 ***/
#include <stdio.h>
int main()
{
    int N, original, digit;
    int sum = 0;
    int i, fact;
    scanf("%d", &N);
    original = N;

    while(N > 0)
    {
        digit = N % 10;  
        fact = 1;
        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        N = N / 10;  
    }
    if(sum == original)
        printf("Yes");
    else
        printf("No");
    return 0;
}
