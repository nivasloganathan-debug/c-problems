/******************************************************************************
6 Elevator Overload Warning System (While Loop)
Description
An elevator tracks weight added by each passenger.
Problem Statement
Using a while loop, determine how many passengers entered before overload.
Input Format
Integer maxWeight
 Integer N
 N integers (passenger weights)
Output Format
Passengers Allowed
 Overload Status <Yes/No>
Test Cases
Input
500
5
80 90 100 120 150

Output
Passengers Allowed: 4
Overload: Yes

Input
400
3
100 120 150

Output
Passengers Allowed: 3
Overload: No

Input
300
4
120 100 90 80

Output
Passengers Allowed: 2
Overload: Yes

Explanation (TC1)
Weight is accumulated using a while loop.
 Once total exceeds maximum limit, entry stops.
 Only four passengers are allowed safely.
 The overload condition is triggered afterward.
 Loop control ensures precise stopping. 



*******************************************************************************/
#include <stdio.h>
int main() {
    int maxWeight, N;
    int weights[100];
    int total = 0;
    int i = 0;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    for (int j = 0; j < N; j++) {
        scanf("%d", &weights[j]);
    }
    while (i < N && total + weights[i] <= maxWeight) {
        total = total + weights[i];
        i++;
    }

    printf("Passengers Allowed: %d\n", i);

    if (i < N)
        printf("Overload: Yes\n");
    else
        printf("Overload: No\n");

    return 0;
}