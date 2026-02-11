/*****************************************************************************
 Topic: Relational Operators (> < == != >= <=)
Easy Questions
Compare two numbers using <.
Test Case 1
Input: 5 10
Output: 1
*******************************************************************************/
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);   // Input two numbers
    printf("%d", a < b);     // Compare using <
    return 0;
}

