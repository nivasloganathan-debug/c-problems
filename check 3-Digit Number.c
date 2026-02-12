/******************************************************************************

Check 3-Digit Number
Input: 345
Output: Three-digit number
Explanation: Number between 100 and 999
*******************************************************************************/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>=100&&num<=999)
    {
        printf("Three digit number");
    }
    else
    {
        printf("Not three digit number");
    }

    return 0;
}
