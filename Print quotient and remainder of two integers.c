/******************************************************************************
Print quotient and remainder of two integers.
Test Case 1
Input: 9 2
Output: Quotient=4 Remainder=1
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 9;
    int b = 2;
    int quotient;
    int remainder;

    quotient = a / b;
    remainder = a % b;
    printf("Quotient=%d ", quotient);
    printf("Remainder=%d", remainder);
    return 0;
}

