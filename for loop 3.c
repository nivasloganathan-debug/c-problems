/******************************************************************************

hallenge Name
Even Numbers Printer
Description
Print all even numbers from 1 to N.
Problem Statement
Use a for loop to print even numbers.
Input Format
Integer N
Constraints
1 ≤ N ≤ 1000
Output Format
Even numbers separated by space
Test Cases
Input: 10 → Output: 2 4 6 8 10
 Input: 5 → Output: 2 4
 Input: 2 → Output: 2
*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
