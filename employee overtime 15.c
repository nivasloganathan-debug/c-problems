/******************************************************************************

15 Employee Overtime Risk Analyzer (While Loop)
Description
A company tracks daily overtime hours to prevent burnout.
Problem Statement
Using a while loop, calculate total overtime and count burnout-risk days (>4 hours).
Input Format
Integer N
 N integers (overtime hours per day)
Output Format
Total Overtime Hours
 Burnout Days
Test Cases
Input
6
2 5 3 6 1 4

Output
Total Overtime: 21
Burnout Days: 2

Input
4
1 2 3 4

Output
Total Overtime: 10
Burnout Days: 0

Input
5
6 6 6 6 6

Output
Total Overtime: 30
Burnout Days: 5

Explanation (TC1)
Each day’s overtime is added using a while loop.
 Days exceeding 4 hours are flagged.
 Two days cross burnout threshold.
 Total overtime is accumulated.
 Final metrics are displayed.
Explanation (TC2)
No overtime exceeds the risk limit

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int hours;
    int totalOvertime = 0;
    int burnoutDays = 0;
    int i = 0;
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &hours);

        totalOvertime += hours;

        if (hours > 4) {
            burnoutDays++;
        }

        i++;
    }
    printf("Total Overtime: %d\n", totalOvertime);
    printf("Burnout Days: %d\n", burnoutDays);
    return 0;
}