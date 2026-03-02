/******************************************************************************

17 Online Shopping Wallet Balance Monitor (While Loop)
Description
A wallet tracks purchases until balance becomes insufficient.
Problem Statement
Using a while loop, determine how many purchases succeed and final balance.
Input Format
Integer walletBalance
 Integer N
 N integers (purchase amounts)
Output Format
Successful Purchases
 Final Balance
Test Cases
Input
3000
5
500 1200 700 800 400

Output
Successful Purchases: 3
Final Balance: 600

Input
2000
3
500 500 500

Output
Successful Purchases: 3
Final Balance: 500

Input
1500
4
600 700 400 200

Output
Successful Purchases: 2
Final Balance: 200

Explanation (TC1)
Each purchase reduces wallet balance.
 The while loop checks balance before deduction.
 Purchases stop when funds are insufficient.
 Three purchases succeed.
 Remaining balance is preserved.
Explanation (TC3)
Third purchase cannot be completed c program 
*******************************************************************************/
#include <stdio.h>
int main() {
    int walletBalance, N;
    int purchase[100];
    int i = 0;
    int success = 0;
    scanf("%d", &walletBalance);
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &purchase[j]);
    }
    while(i < N) {
        if(walletBalance >= purchase[i]) {
            walletBalance = walletBalance - purchase[i];
            success++;
            i++;
        } 
        else {
            break;
        }
    }
    printf("Successful Purchases: %d\n", success);
    printf("Final Balance: %d\n", walletBalance);
    return 0;
}