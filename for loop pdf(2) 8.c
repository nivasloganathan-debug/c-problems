/*
8 Factory Production Loss Tracker
Description
A factory records daily production losses.
Problem Statement
Calculate total loss and count high-loss days (loss > 100 units).
Input Format
Integer N
 N integers (daily loss units)
Output Format
Total Loss
 High Loss Days
Test Cases
Input
4
80 120 150 60

Output
Total Loss: 410
High Loss Days: 2

Input
3
50 70 90

Output
Total Loss: 210
High Loss Days: 0

Input
5
200 30 110 140 20

Output
Total Loss: 500
High Loss Days: 3

Explanation (TC1)
The for loop sums losses and checks for values over 100.
Explanation (TC3)
________________________________

*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int loss;
    int totalLoss = 0;
    int highLossDays = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &loss);
        
        totalLoss += loss;  
        
        if(loss > 100) {     
            highLossDays++;
        }
    }
    printf("Total Loss: %d\n", totalLoss);
    printf("High Loss Days: %d", highLossDays);
    return 0;
}
