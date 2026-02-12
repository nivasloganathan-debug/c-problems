/******************************************************************************
 Smallest Using Ternary Operator
Input: 8 3
Output: 3 is smallest
Explanation: Uses condition ? value1 : value2
 **********************************************/
#include <stdio.h>
int main() {
    int a, b, small;
    scanf("%d %d", &a, &b);
    small = (a < b) ? a : b;
    printf("%d is smallest", small);
    return 0;
}

