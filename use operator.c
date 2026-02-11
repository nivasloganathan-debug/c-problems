/******************************************************************************

Topic: Assignment Operators (= += -= *= /= %=)
Easy Questions
. Use -= operator.
Test Case 1
Input: 10 5
Output: 5
**************************************************************************/
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);  
    a -= b;                 
    printf("%d", a);         
    return 0;
}
