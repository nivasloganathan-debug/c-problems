/******************************************************************************
 Digit Using ASCII
Input: 7
Output: Digit
Explanation: ASCII of 0–9 → digit.
*******************************************************************************/
#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 48 && ch <= 57)
        printf("Digit");
    else
        printf("Not a Digit");
    return 0;
}
