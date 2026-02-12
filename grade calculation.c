/******************************************************************************
Grade Calculation
Input: 82
Output: Grade B
Explanation: Marks ≥75 and <90 → Grade B.

*******************************************************************************/
#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 90)
        printf("Grade A");
    else if (marks >= 75)
        printf("Grade B");
    else if (marks >= 50)
        printf("Grade C");
    else
        printf("Grade F");
    return 0;
}
