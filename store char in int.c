/******************************************************************************
topic 3: Data Types in C – Test Case
  Store char in int
Test Case 1
Output: 65

*******************************************************************************/
#include <stdio.h>
int main()
{
    char ch = 'A';
    int num;
    num = ch;
    printf("%d", num);
    return 0;
}
