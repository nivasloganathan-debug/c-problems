#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int i, found = -1;
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the character to search: ");
    scanf(" %c", &ch);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            found = i;
            break;
        }
    }
    printf("%d", found);
    return 0;
}