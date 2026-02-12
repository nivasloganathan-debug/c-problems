/******************************************************************************
Number Within Range
Input: 15 (range 10–20)
Output: Number is within range
Explanation: Check using logical AND
*******************************************************************************/
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    if (num >= 10 && num <= 20)
        printf("Number is within range");
    else
        printf("Number is not within range");
    return 0;
}

