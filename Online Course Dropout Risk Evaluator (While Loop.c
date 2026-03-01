/******************************************************************************

10 Online Course Dropout Risk Evaluator (While Loop)
Description
An e-learning platform monitors weekly activity.
Problem Statement
Using a while loop, count inactive weeks and decide dropout risk.
Input Format
Integer N (weeks)
 N integers (hours studied per week)
Output Format
Inactive Weeks
 Risk Status <High / Low>
Test Cases
Input
6
5 0 2 0 0 4

Output
Inactive Weeks: 3
Risk Status: High

Input
4
3 2 4 5

Output
Inactive Weeks: 0
Risk Status: Low

Input
5
1 0 1 0 1

Output
Inactive Weeks: 2
Risk Status: Low

Explanation (TC1)
Weeks with zero study hours are marked inactive.
 A while loop processes each week sequentially.
 Three inactive weeks indicate high dropout risk.
 The risk rule is applied after counting.
 Logic stays isolated inside the loop.
Explanation (TC3)
Inactive weeks are present but below risk threshold.

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int hours;
    int i = 0;
    int inactiveWeeks = 0;
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &hours);

        if (hours == 0) {
            inactiveWeeks++;
        }

        i++;
    }
    printf("Inactive Weeks: %d\n", inactiveWeeks);

    if (inactiveWeeks >= 3)
        printf("Risk Status: High\n");
    else
        printf("Risk Status: Low\n");
    return 0;
}