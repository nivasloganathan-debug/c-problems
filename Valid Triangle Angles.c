/******************************************************************************
Valid Triangle (Angles)
Input: 60 60 60
Output: Valid triangle
Explanation: Sum of angles must be 180°
*******************************************************************************/
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && (a + b + c == 180))
        printf("Valid triangle");
    else
        printf("Invalid triangle");
    return 0;
}
