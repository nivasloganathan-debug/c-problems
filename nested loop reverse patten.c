#include <stdio.h>
int main()
{
    int i, j, k;
    int rows = 5;
    for(i = rows; i >= 1; i--)
    {
        // Print spaces
        for(k = 1; k <= rows - i; k++)
        {
            printf(" ");
        }

        // Print symbols
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
