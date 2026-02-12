/******************************************************************************

 Alphabet, Digit, or Special Character
Input: 9
Output: Digit
Explanation: Use ASCII values to classify the character
*******************************************************************************/
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        printf("Alphabet");
    else if (ch >= 48 && ch <= 57)
        printf("Digit");
    else
        printf("Special Character");
    return 0;
}
