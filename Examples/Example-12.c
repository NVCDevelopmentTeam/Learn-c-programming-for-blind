#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], concatStr[200];
    
    // Input two strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character
    
    // String length
    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));
    
    // String concatenation
    strcpy(concatStr, str1);
    strcat(concatStr, " ");
    strcat(concatStr, str2);
    printf("Concatenated string: %s\n", concatStr);
    
    // String comparison
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else if (cmp > 0)
        printf("First string is greater than second string.\n");
    else
        printf("First string is smaller than second string.\n");
    
    return 0;
}
