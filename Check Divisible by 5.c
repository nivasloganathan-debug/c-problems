/******************************************************************************
3. Check Divisible by 5
Input: 25
Output: Divisible by 5
Explanation: If num % 5 == 0, number is divisible by 5

*******************************************************************************/

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}
