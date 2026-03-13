#include <stdio.h>
int main() {
    char password[100];
    int i = 0, found = 0;
    scanf("%s", password);
    while (password[i] != '\0') {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            found = 1;
            break;
        }
        i++;
    }
    if (found)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}