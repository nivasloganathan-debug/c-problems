/******************************************************************************

Daily Expense Overspend Detector
Description
A budgeting app tracks daily expenses and flags overspending days.
Problem Statement
Calculate total monthly expense and count days where expense exceeded ₹1000.
Input Format
●	Integer N (days)

●	N integers (daily expenses)

Output Format
●	Total Expense

●	Overspend Days

Test Cases
Input
5
800 1200 950 1500 700

Output
Total Expense: 5150
Overspend Days: 2

Input
3
500 600 700

Output
Total Expense: 1800
Overspend Days: 0

Input
4
1100 1300 1400 900

Output
Total Expense: 4700
Overspend Days: 3

Explanation (TC1)
 Expenses are summed using a for loop.
 Values above 1000 are counted as overspend days.
Explanation (TC3)
 Only one day is below 1000; remaining days exceed the limit

***************************************************************************/
#include<stdio.h>
int main(){
    int num_days,e_day,oe_days=0,t_expence=0;
    scanf("%d",&num_days);
    for(int i=1;i<=num_days;i++){
        scanf("%d",&e_day);
        t_expence+=e_day;
        if(e_day>1000){
            oe_days+=1;
        }
        e_day=0;
    }
    printf("Total expence : %d \nOver expence days: %d",t_expence,oe_days);
    return 0;
}