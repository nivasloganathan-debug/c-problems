/******************************************************************************

2. Check Even or Odd
Input: 7
Output: Odd number
Explanation: If num % 2 == 0, it’s even; otherwise odd
*******************************************************************************/

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
