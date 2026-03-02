/******************************************************************************

18 Power Grid Failure Chain Analyzer (While Loop)
Description
A power grid records electricity load every hour. If load exceeds capacity, grid partially shuts down.
Problem Statement
Using a while loop, calculate how many hours the grid runs safely and how many overload failures occur.
Input Format
Integer capacity
 Integer N
 N integers (hourly load values)
Output Format
Safe Hours
 Failure Count
Test Cases
Input
100
6
80 90 120 70 130 60

Output
Safe Hours: 4
Failure Count: 2

Input
150
4
100 120 140 160

Output
Safe Hours: 3
Failure Count: 1

Input
90
5
95 100 85 80 70

Output
Safe Hours: 3
Failure Count: 2

Explanation (TC1)
Each hour load is checked using a while loop.
 Loads above capacity are counted as failures.
 Safe hours are counted separately.
 Loop processes sequential grid data.
 Helps predict instability periods.
Explanation (TC3)
First two hours fail immediately.
 Remaining hours operate safely

*******************************************************************************/
#include <stdio.h>
int main() {
    int capacity, N;
    int load[100];
    int i = 0;
    int safeHours = 0;
    int failureCount = 0;
    scanf("%d", &capacity);
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &load[j]);
    }

    while(i < N) {
        if(load[i] <= capacity) {
            safeHours++;
        } else {
            failureCount++;
        }
        i++;
    }
    printf("Safe Hours: %d\n", safeHours);
    printf("Failure Count: %d\n", failureCount);
    return 0;
}