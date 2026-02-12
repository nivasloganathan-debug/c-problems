/******************************************************************************

  Largest of Three Numbers
Input: 10 25 15
Output: 25 is largest
Explanation: Compare all three using if-else if
*******************************************************************************/
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("%d is largest", a);
    else if (b >= a && b >= c)
        printf("%d is largest", b);
    else
        printf("%d is largest", c);
    return 0;
}

