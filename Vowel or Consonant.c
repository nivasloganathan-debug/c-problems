/******************************************************************************

Vowel or Consonant
Input: a
Output: Vowel
Explanation: Check if character is a, e, i, o, u (upper/lowercase)
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ch = tolower(ch);

    if ((ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("Vowel");
        else
            printf("Consonant");
    } else {
        printf("Invalid input");
    }
    return 0;
}
