/******************************************************************************
2 Bank Minimum Balance Violation Tracker (While Loop)
Description
A bank monitors an account daily and flags days when balance goes below ₹2000.
Problem Statement
Using a while loop, calculate the final balance and count how many days the balance was below ₹2000.
Input Format
Integer N (number of days)
 Integer initialBalance
 N integers (daily transaction: positive = deposit, negative = withdrawal)
Output Format
Final Balance
 Low Balance Days
Test Cases
Input
5
3000
-500 -700 1000 -1200 300

Output
Final Balance: 1900
Low Balance Days: 2

Input
3
5000
-1000 -500 -700

Output
Final Balance: 2800
Low Balance Days: 0

Input
4
2500
-600 -400 -300 -500

Output
Final Balance: 700
Low Balance Days: 3

Explanation (TC1)
The balance is updated day by day using a while loop.
 Whenever balance drops below ₹2000, the counter increases.
 Two days fall below the minimum balance threshold.
 The loop runs until all transactions are processed.
 Final balance reflects all deposits and withdrawals.
Explanation (TC3)
The balance crosses below ₹2000 from the second day onward.
 Three days are counted as low-balance days.

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int balance;
    scanf("%d", &balance);
    int i = 0;
    int transaction;
    int lowBalanceDays = 0;
    while (i < N) {
        scanf("%d", &transaction);
        balance = balance + transaction;
        if (balance < 2000) {
            lowBalanceDays++;
        }
        i++;
    }
    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d\n", lowBalanceDays);
    return 0;
}