#include <stdio.h>
int main()
{
    char str[200];
    int i = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("%s", str);
    return 0;
}