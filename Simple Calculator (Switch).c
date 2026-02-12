/******************************************************************************
  Simple Calculator (Switch)
Input: 5 + 3
Output: Result = 8
Explanation: Operator decides operation using switch
 **********************************************/
#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch(op) {
        case '+':
            printf("Result = %d", a + b);
            break;
        case '-':
            printf("Result = %d", a - b);
            break;
        case '*':
            printf("Result = %d", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero not allowed");
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}
