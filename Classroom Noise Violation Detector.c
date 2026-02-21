/******************************************************************************
1 Classroom Noise Violation Detector (While Loop)
Description
A smart classroom logs noise levels every minute.
Problem Statement
Using a while loop, count noise violations (>70 dB) and find longest violation streak.
Input Format
Integer N
 N integers (noise level in dB)
Output Format
Noise Violations
 Longest Violation Streak
Test Cases
Input
8
65 75 80 60 72 73 74 68

Output
Noise Violations: 5
Longest Violation Streak: 3

Input
5
60 65 68 70 69

Output
Noise Violations: 0
Longest Violation Streak: 0

Input
6
80 82 85 60 90 92

Output
Noise Violations: 5
Longest Violation Streak: 3

Explanation (TC1)
The while loop checks each minute’s noise level.
 Values above 70 are counted as violations.
 Continuous violations form a streak.
 Maximum streak is tracked dynamically.
 Final metrics help classroom discipline.
Explanation (TC3)
Multiple violations occur in two clusters.
 Longest cluster length is reported.

  c program  while loop

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int noise[N];
    int i = 0;
    while (i < N) {
        scanf("%d", &noise[i]);
        i++;
    }
    int violations = 0;
    int currentStreak = 0;
    int maxStreak = 0;
    i = 0;
    while (i < N) {
        if (noise[i] > 70) {
            violations++;
            currentStreak++;
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0; 
        }
        i++;
    }
    printf("Noise Violations: %d\n", violations);
    printf("Longest Violation Streak: %d\n", maxStreak);
    return 0;
}