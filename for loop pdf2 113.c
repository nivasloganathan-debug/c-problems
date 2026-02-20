/******************************************************************************

13 Server Error Burst Analyzer
Description
A server logs error counts every hour.
Problem Statement
Calculate total errors and count critical hours (>50 errors).
Input Format
Integer N
 N integers (errors per hour)
Output Format
Total Errors
 Critical Hours
Test Cases
Input
6
30 60 45 80 20 55

Output
Total Errors: 290
Critical Hours: 3

Input
3
10 20 30

Output
Total Errors: 60
Critical Hours: 0

Input
4
70 80 90 100

Output
Total Errors: 340
Critical Hours: 4

Explanation (TC1)
Errors are summed; values above 50 are critical.
Explanation (TC3)
All hours are critical.

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int errors;
    int total = 0;
    int critical = 0;
    scanf("%d", &N);
for(int i = 0; i < N; i++) {
    scanf("%d", &errors);
    total += errors;

if(errors > 50) {
    critical++;
    }
}

printf("Total Errors: %d\n", total);
printf("Critical Hours: %d\n", critical);
 return 0;
}

