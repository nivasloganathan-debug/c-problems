#include <stdio.h>
int main()
{
    char str[200];
    int i = 0, count = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            count++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}