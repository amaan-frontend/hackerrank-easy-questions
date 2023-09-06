#include <stdio.h>
#include <string.h>

char* superReducedString(char* s) {
    int len = strlen(s);
    char stack[len];
    int top = -1;

    for (int i = 0; i < len; i++) {
        if (top == -1 || s[i] != stack[top]) {
            stack[++top] = s[i];
        } else {
            top--; // Remove the matching pair
        }
    }

    if (top == -1) {
        return "Empty String";
    } else {
        char* result = malloc(top + 2); // +2 to account for the null terminator
        for (int i = 0; i <= top; i++) {
            result[i] = stack[i];
        }
        result[top + 1] = '\0';
        return result;
    }
}

int main() {
    char s1[] = "aaabccddd";
    char s2[] = "aa";
    char s3[] = "baab";

    printf("%s\n", superReducedString(s1)); // Output: "abd"
    printf("%s\n", superReducedString(s2)); // Output: "Empty String"
    printf("%s\n", superReducedString(s3)); // Output: "Empty String"

    return 0;
}
