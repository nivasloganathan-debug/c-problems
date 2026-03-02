/******************************************************************************

19 Hospital Emergency Queue Overflow System (While Loop)
Description
A hospital ER processes patients until maximum handling capacity is reached.
Problem Statement
Using a while loop, count treated patients and rejected patients once capacity is exceeded.
Input Format
Integer maxCapacity
 Integer N
 N integers (patients arriving each hour)
Output Format
Treated Patients
 Rejected Patients
Test Cases
Input
50
4
10 20 30 15

Output
Treated Patients: 50
Rejected Patients: 25

Input
100
3
30 40 20

Output
Treated Patients: 90
Rejected Patients: 0

Input
60
5
20 25 30 10 5

Output
Treated Patients: 60
Rejected Patients: 30

Explanation (TC1)
Patients are added hour by hour.
 Once capacity is reached, remaining are rejected.
 While loop simulates real ER pressure.
 Partial hour handling is considered.
 Overflow patients are counted.
Explanation (TC3)
Capacity is hit mid-hour.
 Extra patients are rejected.

*******************************************************************************/
#include <stdio.h>
int main() {
    int maxCapacity, N;
    int patients[100];
    int i = 0;
    int treated = 0, rejected = 0;
    scanf("%d", &maxCapacity);
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &patients[j]);
    }

    while(i < N) {
        if(treated + patients[i] <= maxCapacity) {
            // All patients in this hour can be treated
            treated += patients[i];
        } else {
            // Partial treatment possible
            int remaining = maxCapacity - treated;
            if(remaining > 0) {
                treated += remaining;
                rejected += (patients[i] - remaining);
            } else {
                rejected += patients[i];
            }
        }
        i++;
    }
    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d\n", rejected);
    return 0;
}