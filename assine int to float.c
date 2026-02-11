/******************************************************************************
topic 3: Data Types in C – Test Case
 Assign int to float
Test Case 1
Output: 10.0


*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 10;
    float b;
    b = a;   // assigning int to float
    printf("%.1f", b);
    return 0;
}
