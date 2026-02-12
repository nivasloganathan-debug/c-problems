/******************************************************************************

Find Greater of Two Numbers
Input: 10 20
Output: 20 is greater
Explanation: Compare two numbers using if-else

*******************************************************************************/
#include <stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is greater", num1);
    }
    else
    {
        printf("%d is greater", num2);
    }
    return 0;
}

