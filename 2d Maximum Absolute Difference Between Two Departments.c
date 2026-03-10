#include <stdio.h>
#include <stdlib.h>
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
    int maxDiff = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            for(int k = i + 1; k < r; k++)
            {
                for(int l = 0; l < c; l++)
                {
                    int diff = abs(a[i][j] - a[k][l]);

                    if(diff > maxDiff)
                    {
                        maxDiff = diff;
                    }
                }
            }
        }
    }
    printf("%d", maxDiff);
    return 0;
}