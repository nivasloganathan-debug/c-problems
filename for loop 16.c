
/******************************************************************************
16 Perfect Number Check
Description
Check whether a number is perfect.
Problem Statement
Write a program to check if the given number N is a perfect number using a for loop.
What is a Perfect Number?
A perfect number is a number that is equal to the sum of its proper divisors (excluding the number itself).
👉 Example:
 6 → divisors are 1, 2, 3
 Sum = 1 + 2 + 3 = 6 → Perfect number
Input Format
Integer N
Constraints
1 ≤ N ≤ 1000
Output Format
Print Yes or No
Test Cases
●	Input: 6 → Output: Yes

●	Input: 28 → Output: Yes

●	Input: 10 → Output: No   


 ***/
#include <stdio.h>

int main() 
{
    int N;
    int i;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &N);

    for(i = 1; i < N; i++)
    {
        if(N % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == N)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
