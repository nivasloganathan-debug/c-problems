/******************************************************************************

8 Loan EMI Default Streak Analyzer (While Loop)
Description
A bank tracks monthly EMI payments to identify risky borrowers.
Problem Statement
Using a while loop, calculate the longest consecutive default streak.
Input Format
Integer N (months)
 N integers (1 = paid, 0 = missed)
Output Format
Longest Default Streak
Test Cases
Input
8
1 0 0 1 0 0 0 1

Output
Longest Default Streak: 3

Input
5
1 1 1 1 1

Output
Longest Default Streak: 0

Input
6
0 0 0 1 0 0

Output
Longest Default Streak: 3

Explanation (TC1)
The while loop scans payment status month by month.
 Missed payments increase the default streak counter.
 Paid months reset the streak.
 The maximum streak is updated dynamically.
 Three continuous defaults form the longest streak.
Explanation (TC2)
All EMIs are paid, so no default streak exists.
________________________________________

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int status;
    int i = 0;
    int currentStreak = 0;
    int maxStreak = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &status);

        if (status == 0) {      // Missed EMI
            currentStreak++;
            
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } 
        else {                  // Paid EMI
            currentStreak = 0;  // Reset streak
        }

        i++;
    }
    printf("Longest Default Streak: %d\n", maxStreak);
    return 0;
}