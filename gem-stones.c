#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char minerals[n][101];
    for (int i = 0; i < n; i++) {
        scanf("%s", minerals[i]);
    }

    int gemstones[26] = {0}; // Initialize an array to store occurrences of each mineral (a-z)

    for (int i = 0; i < n; i++) {
        int mineral_present[26] = {0}; // Initialize an array to check which minerals are present in the current rock

        // Mark minerals present in the current rock
        for (int j = 0; j < strlen(minerals[i]); j++) {
            mineral_present[minerals[i][j] - 'a'] = 1;
        }

        // Update the gemstones array based on the current rock
        for (int j = 0; j < 26; j++) {
            gemstones[j] += mineral_present[j];
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (gemstones[i] == n) { // If a mineral is present in all rocks, increment the count
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

