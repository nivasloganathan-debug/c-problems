/*****************************************************************************
 Topic: Relational Operators (> < == != >= <=)
Easy Questions
 Compare two numbers using >= and <=.
Test Case 1
Input: 5 5
Output: 1 1
*******************************************************************************/
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);   
    printf("%d %d", a >= b, a <= b); 
    return 0;
}


