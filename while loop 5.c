/******************************************************************************
5 Online Order Cancellation Risk Monitor (While Loop)
Description
An e-commerce platform flags risk if cancellations exceed successful orders.
Problem Statement
Using a while loop, count successful and cancelled orders and determine risk status.
Input Format
Integer N
 N integers (1 = successful, 0 = cancelled)
Output Format
Successful Orders
 Cancelled Orders
 Status <Risk / Safe>
Test Cases
Input
6
1 0 0 1 0 1

Output
Successful: 3
Cancelled: 3
Status: Safe

Input
5
0 0 1 0 0

Output
Successful: 1
Cancelled: 4
Status: Risk

Input
4
1 1 1 0

Output
Successful: 3
Cancelled: 1
Status: Safe

Explanation (TC2)
The while loop processes each order sequentially.
 Cancelled orders outnumber successful ones.
 This indicates a potential system or seller issue.
 Hence, the status is marked as Risk.
___________________________

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int i = 0;
    int order;
    int successful = 0;
    int cancelled = 0;
    while (i < N) {
        scanf("%d", &order);

        if (order == 1) {
            successful++;
        } else if (order == 0) {
            cancelled++;
        }
        i++;
    }
    printf("Successful: %d\n", successful);
    printf("Cancelled: %d\n", cancelled);
    if (cancelled > successful) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe\n");
    }
    return 0;
}