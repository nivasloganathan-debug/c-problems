/*****************************************************************************
 Topic: Relational Operators (> < == != >= <=)
Easy Questions
1. Compare two numbers using >.
Test Case 1
Input: 10 5
Output: 1
*******************************************************************************/
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a > b);    
    return 0;
}
