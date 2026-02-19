/******************************************************************************

10 Internet Data Usage Alert
Description
An ISP monitors daily data usage.
Problem Statement
Calculate total data used and count days exceeding 2 GB.
Input Format
Integer N
 N integers (daily usage in GB)
Output Format
Total Data
 High Usage Days
Test Cases
Input
5
1 3 2 4 1

Output
Total Data: 11
High Usage Days: 2

Input
3
1 1 2

Output
Total Data: 4
High Usage Days: 0

Input
4
5 3 2 6

Output
Total Data: 16
High Usage Days: 3

Explanation (TC1)
The loop sums usage and checks values above 2 GB.
Explanation (TC3)
Three days cross the high-usage limit

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int usage;
    int total = 0;
    int highDays = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &usage);
        total += usage;

        if(usage > 2) {
            highDays++;
        }
    }
    printf("Total Data: %d\n", total);
    printf("High Usage Days: %d\n", highDays);
    return 0;
}
