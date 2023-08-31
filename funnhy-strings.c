#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// Function to check if a string is funny or not
char* funnyString(char* s) {
    int length = strlen(s);
    bool isFunny = true;

    for (int i = 1; i < length; i++) {
        if (abs(s[i] - s[i-1]) != abs(s[length-i] - s[length-i-1])) {
            isFunny = false;
            break;
        }
    }

    return isFunny ? "Funny" : "Not Funny";
}

int main() {
    int q; // Number of queries
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        char s[10000];
        scanf("%s", s);
        printf("%s\n", funnyString(s));
    }

    return 0;
}
