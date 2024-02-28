#include <stdio.h>
#include <string.h>
void stringMatch(char *text, char *pattern) {
    int text_length = strlen(text);
    int pattern_length = strlen(pattern);
    int i, j;
    for (i = 0; i <= text_length - pattern_length; i++) {
        for (j = 0; j < pattern_length; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == pattern_length)
            printf("Pattern found at index %d\n", i);
    }
}
int main() {
    char text[100];
    char pattern[100];
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    printf("Enter the pattern: ");
    fgets(pattern, sizeof(pattern), stdin);   
    pattern[strcspn(pattern, "\n")] = '\0';
    stringMatch(text, pattern);
    return 0;
}