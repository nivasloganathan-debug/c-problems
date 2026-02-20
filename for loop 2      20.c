/******************************************************************************
20 Mobile Data Recharge Drain Detector
Description
A mobile app tracks daily data usage until a 10 GB plan is exhausted.
Problem Statement
Simulate data usage and count successful usage days before data runs out.
Input Format
Integer totalData
 Integer N
 N integers (daily usage in GB)
Output Format
Remaining Data
 Successful Days
Test Cases
Input
10
4
2 3 4 2

Output
Remaining Data: 1
Successful Days: 3

Input
8
3
2 2 2

Output
Remaining Data: 2
Successful Days: 3

Input
5
4
2 2 2 2

Output
Remaining Data: -1
Successful Days: 2

Explanation (TC1)
Usage stops counting once data becomes insufficient.
Explanation (TC3)
Only first two days consume data fully.

*******************************************************************************/
#include <stdio.h>
int main() {
    int totalData, N;
    scanf("%d", &totalData);
    scanf("%d", &N);
    int usage;
    int remainingData = totalData;
    int successfulDays = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &usage);
        if(remainingData >= usage) {
            remainingData -= usage;
            successfulDays++;
        } else {
            remainingData -= usage;   
            break;                  
        }
    }
    printf("Remaining Data: %d\n", remainingData);
    printf("Successful Days: %d\n", successfulDays);
    return 0;
}