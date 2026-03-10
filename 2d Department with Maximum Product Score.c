#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    long long maxProduct;
    int maxIndex = 0;
    for(int i = 0; i < r; i++)
    {
        long long product = 1;

        for(int j = 0; j < c; j++)
        {
            product *= a[i][j];
        }

        if(i == 0 || product > maxProduct)
        {
            maxProduct = product;
            maxIndex = i;
        }
    }
    printf("%d", maxIndex);
    return 0;
}