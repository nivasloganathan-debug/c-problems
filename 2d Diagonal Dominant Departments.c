#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int count = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < r; i++)
    {
        int sum = 0;

        for(int j = 0; j < c; j++)
        {
            sum += a[i][j];
        }

        int otherSum = sum - a[i][i];

        if(a[i][i] > otherSum)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}