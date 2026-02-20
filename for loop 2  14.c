/******************************************************************************

14 Online Sales Target Tracker
Description
A sales platform records daily sales revenue.
Problem Statement
Calculate total revenue and count target-achieved days (>₹50,000).
Input Format
Integer N
 N integers (daily revenue)
Output Format
Total Revenue
 Target Days
Test Cases
Input
5
40000 60000 55000 30000 70000

Output
Total Revenue: 255000
Target Days: 3

Input
3
20000 30000 40000

Output
Total Revenue: 90000
Target Days: 0

Input
4
80000 90000 100000 60000

Output
Total Revenue: 330000
Target Days: 4

Explanation (TC1)
The loop checks which days exceed the target.
Explanation (TC3)
All days meet the target.  c program
*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int revenue;
    long long totalRevenue = 0;   
    int targetDays = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &revenue);
        totalRevenue += revenue;

        if(revenue > 50000) {
            targetDays++;
        }
    }
    printf("Total Revenue: %lld\n", totalRevenue);
    printf("Target Days: %d\n", targetDays);
    return 0;
}