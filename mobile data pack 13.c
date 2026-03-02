/******************************************************************************
13 Mobile Data Pack Exhaustion Predictor (While Loop)
Description
A telecom app tracks daily mobile data usage to predict exhaustion day.
Problem Statement
Using a while loop, determine on which day the data pack becomes zero or negative and how much data is overused.
Input Format
Integer dataPackGB
 Integer N
 N integers (daily data usage in GB)
Output Format
Exhausted Day
 Overused Data (GB)
Test Cases
Input
10
5
2 3 4 2 1

Output
Exhausted Day: 4
Overused Data: 1

Input
8
3
2 2 2

Output
Exhausted Day: Not Exhausted
Overused Data: 0

Input
6
4
1 2 3 4

Output
Exhausted Day: 3
Overused Data: 0

Explanation (TC1)
The while loop subtracts usage day by day.
 On day 4, remaining data becomes negative.
 That day is marked as exhaustion day.
 Extra consumed data is calculated.
 Loop stops once data is exhausted.
Explanation (TC3)
Pack reaches exactly zero on day 3.
 No overuse occurs beyond exhaustion


*******************************************************************************/
#include <stdio.h>
int main() {
    int dataPack;
    int N;
    int usage;
    int i = 0;
    int exhaustedDay = -1;
    int overused = 0;
    scanf("%d", &dataPack);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &usage);

        if (exhaustedDay == -1) {  
            dataPack -= usage;

            if (dataPack <= 0) {
                exhaustedDay = i + 1;   

                if (dataPack < 0) {
                    overused = -dataPack;  
                } else {
                    overused = 0;
                }
            }
        }

        i++;
    }
    if (exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overused);
    }
    return 0;
}