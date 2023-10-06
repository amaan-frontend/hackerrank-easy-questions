#include <stdio.h>
#include <string.h>

int makingAnagrams(char* s1, char* s2) {
    int freq[26] = {0};

    // Count the frequency of characters in the first string.
    for (int i = 0; i < strlen(s1); i++) {
        freq[s1[i] - 'a']++;
    }

    // Subtract the frequency of characters in the second string.
    for (int i = 0; i < strlen(s2); i++) {
        freq[s2[i] - 'a']--;
    }

    // Calculate the total number of characters that need to be deleted.
    int deletions = 0;
    for (int i = 0; i < 26; i++) {
        deletions += (freq[i] > 0) ? freq[i] : -freq[i];
    }

    return deletions;
}

int main() {
    char s1[1001], s2[1001];
    scanf("%s", s1);
    scanf("%s", s2);

    int result = makingAnagrams(s1, s2);

    printf("%d\n", result);

    return 0;
}

