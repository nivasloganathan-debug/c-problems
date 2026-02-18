/*
4 Salary Deduction Calculator
Description
A company deducts salary for employee absences.
Problem Statement
Calculate the final salary after deducting ₹100 for each absent day.
Input Format
Integer salary
 Integer absentDays
Output Format
Final Salary ₹
Test Cases
Input
30000
3

Output
Final Salary: ₹29700

Input
25000
0

Output
Final Salary: ₹25000

Input
20000
5

Output
Final Salary: ₹19500

Explanation (TC1)
A for loop runs for each absent day.
 ₹100 is deducted per iteration.
Explanation (TC3)
Five iterations cause a total deduction of ₹500.
________________________________________
________________________________________

*/
#include<stdio.h>
int main(){
    int salary,leave_days,F_salary;
    scanf("%d\n%d",&salary,&leave_days);
    F_salary=salary-(leave_days*100);
    printf("%d",F_salary);
    return 0;
    
}