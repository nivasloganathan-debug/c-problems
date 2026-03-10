#include <stdio.h>
int main()
{
    int r, c, i, j, k;
    int count = 0;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            int rowMin = 1;
            int colMax = 1;
            for(k = 0; k < c; k++)
            {
                if(a[i][k] < a[i][j])
                {
                    rowMin = 0;
                    break;
                }
            }
            for(k = 0; k < r; k++)
            {
                if(a[k][j] > a[i][j])
                {
                    colMax = 0;
                    break;
                }
            }

            if(rowMin && colMax)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}