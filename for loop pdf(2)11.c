/******************************************************************************

11 Hospital Patient Load Monitor
Description
A hospital tracks patients visiting daily.
Problem Statement
Calculate total patients and count overcrowded days (>100 patients).
Input Format
Integer N
 N integers (patients per day)
Output Format
Total Patients
 Overcrowded Days
Test Cases
Input
5
80 120 150 90 110

Output
Total Patients: 550
Overcrowded Days: 3

Input
3
60 70 80

Output
Total Patients: 210
Overcrowded Days: 0

Input
4
130 140 150 160

Output
Total Patients: 580
Overcrowded Days: 4

Explanation (TC1)
Patients are summed and values over 100 are counted.
Explanation (TC3)
All days are overcrowded.
*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int patients;
    int total = 0;
    int overcrowded = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &patients);
        total += patients;
        if(patients > 100) {
            overcrowded++;
        }
    }
    printf("Total Patients: %d\n", total);
    printf("Overcrowded Days: %d\n", overcrowded);
    return 0;
}
