/*****************************************************************************
 Topic: Relational Operators (> < == != >= <=)
Easy Questions
 Topic: Logical Operators (&& || !)
Easy Questions
1. Use logical AND on two non-zero values.
Test Case 1
Input: 5 3
Output: 1
*******************************************************************************/
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);   
    printf("%d", a && b);  
    return 0;
}

