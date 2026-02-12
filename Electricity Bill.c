/******************************************************************************
Electricity Bill
Input: 120 units
Output: Bill amount = Rs. 600
Explanation: Charges calculated using slab rates with if-else
*******************************************************************************/
#include <stdio.h>
int main() {
    int units;
    int bill;
    scanf("%d", &units);
    if (units <= 100)
        bill = units * 5;
    else
        bill = units * 5; 
    printf("Bill amount = Rs. %d", bill);
    return 0;
}
