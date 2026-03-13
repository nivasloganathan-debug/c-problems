#include <stdio.h>
int main() {
    char email[100];
    int i = 0;
    scanf("%s", email);
    while(email[i] != '@' && email[i] != '\0') {
        printf("%c", email[i]);
        i++;
    }
    return 0;
}