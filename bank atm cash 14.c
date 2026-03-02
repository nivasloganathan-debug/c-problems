/******************************************************************************
14 Bank ATM Cash Depletion Tracker (While Loop)
Description
An ATM dispenses cash for withdrawals until cash runs out.
Problem Statement
Using a while loop, count successful withdrawals and remaining cash.
Input Format
Integer ATMcash
 Integer N
 N integers (withdrawal amounts)
Output Format
Successful Withdrawals
 Remaining Cash
Test Cases
Input
20000
5
5000 7000 4000 6000 2000

Output
Successful Withdrawals: 3
Remaining Cash: 4000

Input
10000
3
3000 3000 3000

Output
Successful Withdrawals: 3
Remaining Cash: 1000

Input
8000
4
2000 4000 3000 1000

Output
Successful Withdrawals: 2
Remaining Cash: 2000

Explanation (TC1)
Withdrawals are processed sequentially.
 ATM cash is reduced inside the while loop.
 Loop stops when cash is insufficient.
 Only completed withdrawals are counted.
 Remaining cash is reported accurately.
Explanation (TC3)
Third withdrawal cannot be processed.
 Loop terminates early


*******************************************************************************/
#include <stdio.h>
int main() {
    int atmCash;
    int N;
    int withdrawal;
    int i = 0;
    int successful = 0;

    scanf("%d", &atmCash);
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &withdrawal);

        if (withdrawal <= atmCash) {
            atmCash -= withdrawal;
            successful++;
        } else {
            break;
        }

        i++;
    }
    printf("Successful Withdrawals: %d\n", successful);
    printf("Remaining Cash: %d\n", atmCash);
    return 0;
}