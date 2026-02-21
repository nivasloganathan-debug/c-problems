/******************************************************************************
4 Factory Machine Failure Streak Analyzer (While Loop)
Description
A factory records machine status daily. Continuous failures indicate serious issues.
Problem Statement
Using a while loop, count the longest continuous failure streak.
Input Format
Integer N
 N integers (1 = working, 0 = failed)
Output Format
Longest Failure Streak
Test Cases
Input
7
1 0 0 1 0 0 0

Output
Longest Failure Streak: 3

Input
5
1 1 1 1 1

Output
Longest Failure Streak: 0

Input
6
0 0 1 0 0 1

Output
Longest Failure Streak: 2

Explanation (TC1)
The while loop scans each day sequentially.
 Failure count increases for continuous zeros.
 Working days reset the streak.
 The maximum streak is tracked throughout execution.
 Three consecutive failures are detected.
Explanation (TC2)
No failure days exist, so the streak remains zero.
________________________________________

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int status[N];
    int i = 0;

    while (i < N) {
        scanf("%d", &status[i]);
        i++;
    }
    int currentStreak = 0;
    int maxStreak = 0;
    i = 0;
    while (i < N) {
        if (status[i] == 0) {
            currentStreak++;

            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0; 
        }

        i++;
    }
    printf("Longest Failure Streak: %d\n", maxStreak);
    return 0;
}