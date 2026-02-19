/******************************************************************************

9 Student Score Drop Detector
Description
A school tracks test scores to detect poor performance.
Problem Statement
Calculate average score and count subjects scoring below 40.
Input Format
Integer N
 N integers (marks)
Output Format
Average Score
 Failed Subjects
Test Cases
Input
5
55 35 70 30 60

Output
Average Score: 50
Failed Subjects: 2

Input
3
80 75 90

Output
Average Score: 81
Failed Subjects: 0

Input
4
40 39 38 37

Output
Average Score: 38
Failed Subjects: 3

Explanation (TC1)
Marks are summed and divided by count.
 Scores below 40 are failures.
Explanation (TC3)
Only one subject meets the passing mark.

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int marks;
    int sum = 0;
    int failed = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &marks);
        sum += marks;

        if(marks < 40) {
            failed++;
        }
    }
    int average = sum / N;
    printf("Average Score: %d\n", average);
    printf("Failed Subjects: %d\n", failed);
    return 0;
}
