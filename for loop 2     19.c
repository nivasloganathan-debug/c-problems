/******************************************************************************
19 Classroom Noise Level Monitor
Description
Noise sensors record classroom noise levels in decibels.
Problem Statement
Find maximum noise level and count noisy periods (>70 dB).
Input Format
Integer N
 N integers (noise levels)
Output Format
Maximum Noise
 Noisy Periods
Test Cases
Input
5
65 72 68 80 60

Output
Maximum Noise: 80
Noisy Periods: 2

Input
3
50 60 65

Output
Maximum Noise: 65
Noisy Periods: 0

Input
4
75 78 82 90

Output
Maximum Noise: 90
Noisy Periods: 4

Explanation (TC1)
Noise above 70 dB is considered disturbing.
Explanation (TC3)
All readings exceed the safe limit.

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int noise;
    int maxNoise;
    int noisyPeriods = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &noise);
        if(i == 0) {
            maxNoise = noise;   
        }

        if(noise > maxNoise) {
            maxNoise = noise;   
        }

        if(noise > 70) {
            noisyPeriods++;     
        }
    }
    printf("Maximum Noise: %d\n", maxNoise);
    printf("Noisy Periods: %d\n", noisyPeriods);
    return 0;
}