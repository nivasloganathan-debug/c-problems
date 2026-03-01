/******************************************************************************

9 Fuel Tank Safety Consumption Monitor (While Loop)
Description
A vehicle tracks fuel consumption per trip to avoid empty tank scenarios.
Problem Statement
Using a while loop, determine how many trips are completed before fuel becomes insufficient.
Input Format
Integer fuel
 Integer N
 N integers (fuel consumed per trip)
Output Format
Completed Trips
 Remaining Fuel
Test Cases
Input
50
5
10 15 20 10 5

Output
Completed Trips: 3
Remaining Fuel: 5

Input
30
3
5 10 15

Output
Completed Trips: 3
Remaining Fuel: 0

Input
20
4
8 7 6 5

Output
Completed Trips: 2
Remaining Fuel: 5

Explanation (TC1)
Fuel is reduced sequentially using a while loop.
 The loop stops when remaining fuel cannot support the next trip.
 Only completed trips are counted.
 Fuel safety is maintained by controlled looping.
 Three trips are completed successfully.
Explanation (TC3)
Fuel becomes insufficient during the third trip.
 The loop terminates early.

*******************************************************************************/
#include <stdio.h>
int main() {
    int fuel, N;
    int consumption;
    int i = 0;
    int completedTrips = 0;
    scanf("%d", &fuel);
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &consumption);

        if (fuel >= consumption) {
            fuel = fuel - consumption;
            completedTrips++;
        } else {
            break;   // Stop if fuel is not enough
        }

        i++;
    }
    printf("Completed Trips: %d\n", completedTrips);
    printf("Remaining Fuel: %d\n", fuel);
    return 0;
}