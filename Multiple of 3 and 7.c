/******************************************************************************


Multiple of 3 and 7
Input: 21
Output: Multiple of both 3 and 7
Explanation: Condition: num % 3 == 0 && num % 7 == 0..
*******************************************************************************/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%3==0&&num%7==0)
    {
        printf("Multiple of both 3 and 7");
    }
    else
    {
        printf("Not multiple of both 3 and 7");
    }

    return 0;
}
