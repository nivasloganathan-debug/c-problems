/*
ATM Daily Withdrawal Limit
Description
An ATM allows multiple cash withdrawals in a single day and monitors whether the user exceeds the daily withdrawal limit.
Problem Statement
Calculate the total amount withdrawn in a day and determine whether the daily limit of ₹10,000 is exceeded.
Input Format
Integer N (number of withdrawals)
 N integers (withdrawal amounts)
Output Format
Approved / Limit Exceeded
Test Cases
Input
3
3000 4000 2000

Output
Approved

Input
4
4000 3000 2500 1000

Output
Limit Exceeded

Input
2
5000 5000

Output
Approved

Explanation (TC1)
The for loop adds all withdrawal amounts.
 Total = 9000, which is within the daily limit.
Explanation (TC2)
Total withdrawal exceeds ₹10,000, so the limit is exceeded

*/
#include <stdio.h>
int main() {
   int num_withdraw,amt_withdrawed,t_amt_withdraw=0;
   scanf("%d",&num_withdraw);
   for (int i=1;i<=num_withdraw;i++){
       scanf("%d",&amt_withdrawed);
       t_amt_withdraw+=amt_withdrawed;
   }
   if(t_amt_withdraw<=10000){
       printf("Approved");
   }
    else{
        printf("Limit reached");
    }
    return 0;
}
