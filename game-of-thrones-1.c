#include <stdio.h>
#include <string.h>

// Function to check if the string can be rearranged into a palindrome
char* gameOfThrones(char* s) {
    int freq[26] = {0}; // Array to store character frequencies

    // Count the frequency of each character
    for(int i = 0; i < strlen(s); i++) {
        freq[s[i] - 'a']++;
    }

    int oddCount = 0; // Count of characters with odd frequencies

    // Check if there's more than one character with an odd frequency
    for(int i = 0; i < 26; i++) {
        if(freq[i] % 2 != 0) {
            oddCount++;
        }
    }

    // If there's more than one character with an odd frequency, it's not possible to form a palindrome
    if(oddCount > 1) {
        return "NO";
    }

    return "YES";
}

int main() {
    char s[1001];
    scanf("%s", s);

    char* result = gameOfThrones(s);
    printf("%s\n", result);

    return 0;
}


