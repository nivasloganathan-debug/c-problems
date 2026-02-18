/*
5 Mobile Battery Drain Tracker
Description
A phone’s battery drains every hour based on usage.
Problem Statement
Calculate remaining battery percentage after N hours.
Input Format
Integer batteryPercent
 Integer N
 N integers (battery drain per hour)
Output Format
Remaining Battery %
Test Cases
Input
100
3
10 15 20

Output
Remaining Battery: 55%

Input
80
2
20 30

Output
Remaining Battery: 30%

Input
50
1
10

Output
Remaining Battery: 40%

Explanation (TC1)
Battery percentage is reduced hour by hour using a for loop.
Explanation (TC2)
Two iterations subtract a total of 50%.
________________________________________

*/
#include <stdio.h>
int main() {
    int batteryPercent, N;
    scanf("%d", &batteryPercent);
        scanf("%d", &N);
    int drain;
    for(int i = 0; i < N; i++) {
        scanf("%d", &drain);
        batteryPercent -= drain;
        
        if(batteryPercent < 0) {
            batteryPercent = 0;
        }
    }
    printf("Remaining Battery: %d%%", batteryPercent);
    return 0;
}
