/******************************************************************************

17 Delivery Delay Risk System
Description
A delivery company tracks delays (in minutes) for each delivery.
Problem Statement
Find total delay time and count deliveries delayed more than 30 minutes.
Input Format
Integer N
 N integers (delay minutes)
Output Format
Total Delay
 Delayed Deliveries
Test Cases
Input
5
10 45 20 60 15

Output
Total Delay: 150
Delayed Deliveries: 2

Input
3
5 10 15

Output
Total Delay: 30
Delayed Deliveries: 0

Input
4
35 40 50 60

Output
Total Delay: 185
Delayed Deliveries: 4

Explanation (TC1)
Delays above 30 minutes are counted separately.
Explanation (TC3)
Every delivery exceeds allowed delay.

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int delay;
    int totalDelay = 0;
    int delayedDeliveries = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &delay);
        totalDelay += delay;
        if(delay > 30) {
            delayedDeliveries++;
        }
    }
    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Deliveries: %d\n", delayedDeliveries);
    return 0;
}