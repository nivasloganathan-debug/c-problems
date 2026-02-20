/******************************************************************************
18 Employee Overtime Cost Tracker
Description
A company logs daily overtime hours for an employee.
Problem Statement
Calculate total overtime hours and overtime cost (₹200/hour).
 Count days with overtime > 3 hours.
Input Format
Integer N
 N integers (overtime hours)
Output Format
Total Overtime Hours
 Overtime Cost
 Heavy Overtime Days
Test Cases
Input
5
2 4 1 5 3

Output
Total Overtime Hours: 15
Overtime Cost: 3000
Heavy Overtime Days: 2

Input
3
1 2 3

Output
Total Overtime Hours: 6
Overtime Cost: 1200
Heavy Overtime Days: 0

Input
4
4 5 6 2

Output
Total Overtime Hours: 17
Overtime Cost: 3400
Heavy Overtime Days: 3

Explanation (TC1)
Only hours greater than 3 are flagged as heavy overtime.
Explanation (TC3)

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int hours;
    int totalHours = 0;
    int heavyDays = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &hours);
        totalHours += hours;
        if(hours > 3) {
            heavyDays++;
        }
    }
    int overtimeCost = totalHours * 200;
    printf("Total Overtime Hours: %d\n", totalHours);
    printf("Overtime Cost: %d\n", overtimeCost);
    printf("Heavy Overtime Days: %d\n", heavyDays);
    return 0;
}