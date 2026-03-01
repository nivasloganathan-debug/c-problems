/******************************************************************************

7 Hospital Bed Occupancy Threshold Monitor (While Loop)
Description
A hospital records bed occupancy changes every hour to avoid overcrowding.
Problem Statement
Using a while loop, calculate the final occupied beds and count how many times occupancy exceeded 90% of capacity.
Input Format
Integer capacity
 Integer N (number of hours)
 N integers (positive = admission, negative = discharge)
Output Format
Final Occupied Beds
 Critical Hours Count
Test Cases
Input
100
6
20 30 -10 25 -5 40

Output
Final Occupied Beds: 100
Critical Hours: 1

Input
80
4
10 20 15 -5

Output
Final Occupied Beds: 40
Critical Hours: 0

Input
60
5
30 20 10 -5 15

Output
Final Occupied Beds: 70
Critical Hours: 3

Explanation (TC1)
Occupancy is updated hour by hour using a while loop.
 90% of capacity equals 90 beds.
 Whenever occupied beds exceed this limit, a counter increases.
 Two hours exceed the critical threshold.
 Final occupancy reaches full capacity.
Explanation (TC3)
The hospital exceeds the safe occupancy limit multiple times.
 Each violation is counted independently.
________________________________________

*******************************************************************************/
#include <stdio.h>
int main() {
    int capacity, N;
    int change;
    int occupied = 0;
    int i = 0;
    int criticalCount = 0;
    scanf("%d", &capacity);
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &change);
        occupied = occupied + change;
        if (occupied > (capacity * 90) / 100) {
            criticalCount++;
        }

        i++;
    }
    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalCount);
    return 0;
}