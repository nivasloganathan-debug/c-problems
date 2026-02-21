/******************************************************************************
3 Mobile Data Limit Exhaustion Checker (While Loop)
Description
A telecom app tracks daily data usage until the data pack is exhausted.
Problem Statement
Using a while loop, determine how many days the data pack lasted and remaining data.
Input Format
Integer totalData (in GB)
 Integer N (days)
 N integers (daily data usage)
Output Format
Days Data Lasted
 Remaining Data
Test Cases
Input
10
5
2 3 4 1 2

Output
Days Used: 4
Remaining Data: 0GB

Input
15
4
3 4 2 5

Output
Days Used: 4
Remaining Data: 1GB

Input
8
5
2 3 3 1 1

Output
Days Used: 3
Remaining Data: 0GB

Explanation (TC1 – Corrected)
The while loop subtracts daily usage from the total data pack.
The loop continues until the data becomes zero or negative.
In this case, the data pack reaches 0GB on the 4th day, so the loop stops.
Only the days until exhaustion are counted.
Remaining data is displayed as 0GB, since negative values are not allowed.
Explanation (TC3)
Data exactly becomes zero on day three.
 No additional days are processed after exhaustion

*******************************************************************************/
#include <stdio.h>
int main() {
    int totalData, N;
    scanf("%d", &totalData);
    scanf("%d", &N);
    int i = 0;
    int usage;
    int daysUsed = 0;
    while (i < N && totalData > 0) {
        scanf("%d", &usage);
        if (totalData - usage >= 0) {
            totalData = totalData - usage;
            daysUsed++;
        } else {
            totalData = 0;  
            daysUsed++;
            break;           
        }
        i++;
    }
    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);
    return 0;
}