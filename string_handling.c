#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100], str2[100], sub[100];
    int i, len = 0, isPalindrome = 1;

    // Input main string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline from fgets
    str[strcspn(str, "\n")] = '\0';

    // Length
    while (str[len] != '\0') {
        len++;
    }
    printf("Length = %d\n", len);

    // Reverse
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string = %s\n", rev);

    // Palindrome check
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome: YES\n");
    else
        printf("Palindrome: NO\n");

    // Equality check
    printf("Enter another string to compare: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strcmp(str, str2) == 0)
        printf("Strings are EQUAL\n");
    else
        printf("Strings are NOT equal\n");

    // Substring check
    printf("Enter substring to search: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';

    if (strstr(str, sub) != NULL)
        printf("Substring FOUND\n");
    else
        printf("Substring NOT found\n");

    return 0;
}
