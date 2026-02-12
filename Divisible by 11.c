/******************************************************************************
. Divisible by 11
Input: 121
Output: Divisible by 11
Explanation: If num % 11 == 0
*******************************************************************************/
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 11 == 0)
        printf("Divisible by 11");
    else
        printf("Not divisible by 11");
    return 0;
}

