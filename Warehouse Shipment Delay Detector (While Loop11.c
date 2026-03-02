/******************************************************************************
11 Warehouse Shipment Delay Detector (While Loop)
Description
A warehouse tracks shipment dispatch delays daily.
Problem Statement
Using a while loop, calculate total delay and count delayed days (>2 hours).
Input Format
Integer N
 N integers (delay in hours)
Output Format
Total Delay
 Delayed Days
Test Cases
Input
5
1 3 0 4 2

Output
Total Delay: 10
Delayed Days: 2

Input
3
0 1 2

Output
Total Delay: 3
Delayed Days: 0

Input
4
3 3 3 3

Output
Total Delay: 12
Delayed Days: 4

Explanation (TC1)
Each day’s delay is processed using a while loop.
 Delays above two hours are counted separately.
 Both total delay and delayed days are tracked.
 Logic runs until all days are processed.
 Two days violate the delay threshold.
Explanation (TC3)
All shipment days exceed the delay limit.
 Hence, all are counted as delayed days.

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int delay;
    int totalDelay = 0;
    int delayedDays = 0;
    int i = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &delay);

        totalDelay += delay;

        if (delay > 2) {
            delayedDays++;
        }

        i++;
    }
    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Days: %d\n", delayedDays);
    return 0;
}