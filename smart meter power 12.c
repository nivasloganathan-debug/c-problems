/******************************************************************************
12 Smart Meter Power Surge Analyzer (While Loop)
Description
A smart meter logs power usage hourly to detect surges.
Problem Statement
Using a while loop, find the highest power usage and count surge hours (>5 kW).
Input Format
Integer N
 N integers (power usage in kW)
Output Format
Maximum Usage
 Surge Hours
Test Cases
Input
6
3 6 4 8 2 7

Output
Max Usage: 8
Surge Hours: 3

Input
4
2 3 4 5

Output
Max Usage: 5
Surge Hours: 0

Input
5
6 6 6 6 6

Output
Max Usage: 6
Surge Hours: 5

Explanation (TC1)
The while loop compares each hour’s usage.
 Maximum value is updated dynamically.
 Usage above 5 kW is treated as a surge.
 Three surge hours are detected.
 Final max usage is reported.
Explanation (TC2)
No usage exceeds surge threshold.


*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int usage;
    int maxUsage = 0;
    int surgeHours = 0;
    int i = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &usage);
        if (i == 0) {
            maxUsage = usage;  
        }

        if (usage > maxUsage) {
            maxUsage = usage;  
        }

        if (usage > 5) {
            surgeHours++;   
        }

        i++;
    }
    printf("Max Usage: %d\n", maxUsage);
    printf("Surge Hours: %d\n", surgeHours);

    return 0;
}