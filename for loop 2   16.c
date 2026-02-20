/******************************************************************************

16   ATM Cash Refill Risk Analyzer
Description
An ATM records cash withdrawals per transaction. If remaining cash drops below ₹5,000, the ATM is at risk.
Problem Statement
Calculate remaining cash after all withdrawals and count how many times the balance went below ₹5,000.
Input Format
Integer initialCash
 Integer N
 N integers (withdrawal amounts)
Output Format
Remaining Cash
 Risk Count
Test Cases
Input
20000
4
3000 4000 5000 2000

Output
Remaining Cash: 6000
Risk Count: 1

Input
15000
3
2000 3000 4000

Output
Remaining Cash: 6000
Risk Count: 0

Input
12000
4
3000 3000 2000 2000

Output
Remaining Cash: 2000
Risk Count: 2

Explanation (TC1)
Cash is reduced transaction by transaction.
 Only once the balance drops below ₹5,000.
Explanation (TC3)
Balance crosses risk level twice during withdrawals

*******************************************************************************/
#include <stdio.h>
int main() {
    int initialCash, N;
    scanf("%d", &initialCash);
    scanf("%d", &N);
    int withdrawal;
    int remainingCash = initialCash;
    int riskCount = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &withdrawal);
        remainingCash -= withdrawal;
        if(remainingCash < 5000) {
            riskCount++;
        }
    }
    printf("Remaining Cash: %d\n", remainingCash);
    printf("Risk Count: %d\n", riskCount);
    return 0;
}