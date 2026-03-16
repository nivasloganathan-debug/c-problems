#include <stdio.h>
int main() {
    char str[200];
    int i = 0, spaceCount = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaceCount++;
        }
        i++;
    }
    printf("%d", spaceCount);
    return 0;
}