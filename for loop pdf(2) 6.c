/*
6 Bus Ticket Revenue System
Description
A bus conductor records ticket fares collected from passengers.
Problem Statement
Calculate the total ticket revenue collected in a trip.
Input Format
Integer N (number of passengers)
 N integers (ticket fare per passenger)
Output Format
Total Collection ₹
Test Cases
Input
4
20 30 20 10

Output
Total Collection: ₹80

Input
3
15 15 15

Output
Total Collection: ₹45

Input
1
50

Output
Total Collection: ₹50

Explanation (TC1)
Each passenger’s fare is added using a for loop.
Explanation (TC3)
Only one passenger fare is counted.

_____________________________________

*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int fare, total = 0;
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &fare);
        total += fare;
    }
    
    printf("Total Collection: ₹%d", total);
    return 0;
}
