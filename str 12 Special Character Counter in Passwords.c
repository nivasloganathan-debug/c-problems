#include <stdio.h>
int main()
{
    char str[200];
    int i = 0, count = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        if(!((str[i] >= 'A' && str[i] <= 'Z') ||
             (str[i] >= 'a' && str[i] <= 'z') ||
             (str[i] >= '0' && str[i] <= '9') ||
             (str[i] == ' ')))
        {
            count++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}