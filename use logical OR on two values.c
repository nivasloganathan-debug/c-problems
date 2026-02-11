/*****************************************************************************
 Topic: Relational Operators (> < == != >= <=)
Easy Questions
 Topic: Logical Operators (&& || !)
1Use logical OR on two values.
Test Case 1
Input: 0 5
Output: 1
*******************************************************************************/
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);  
    printf("%d", a || b);  
    return 0;
}
