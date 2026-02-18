/*
7 Rainfall Pattern Analyzer
Description
A weather station records daily rainfall to analyze heavy rain days.
Problem Statement
Calculate total rainfall and count days where rainfall exceeded 50 mm.
Input Format
Integer N (number of days)
 N integers (rainfall per day in mm)
Output Format
Total Rainfall
 Heavy Rain Days
Test Cases
Input
5
30 60 45 80 20

Output
Total Rainfall: 235
Heavy Rain Days: 2

Input
3
10 20 30

Output
Total Rainfall: 60
Heavy Rain Days: 0

Input
4
55 70 90 40

Output
Total Rainfall: 255
Heavy Rain Days: 3

Explanation (TC1)
The loop adds all rainfall values.
 Rainfall above 50 mm is counted as heavy rain.
Explanation (TC3)
Only one day has rainfall below the threshold

_____________________________________

*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int rainfall;
    int total = 0;
    int heavyDays = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &rainfall);
        
        total += rainfall;   
        
        if(rainfall > 50) {  
            heavyDays++;
        }
    }
    printf("Total Rainfall: %d\n", total);
    printf("Heavy Rain Days: %d", heavyDays);
    return 0;
}
