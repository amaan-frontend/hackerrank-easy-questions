#include <stdio.h>

int nonDivisibleSubset(int S[], int n, int k) {
    // Count the frequency of remainders when dividing each number by k
    int freq[k];
    for (int i = 0; i < k; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        freq[S[i] % k]++;
    }

    // For numbers that are divisible by k, only one can be included in the subset
    int count = (freq[0] > 0) ? 1 : 0;

    // For numbers that are not divisible by k, check both the number and its complement
    for (int i = 1; i <= k / 2; i++) {
        if (i != k - i) {
            count += (freq[i] > freq[k - i]) ? freq[i] : freq[k - i];
        }
    }

    // For k being even, add one more number whose remainder is k / 2
    if (k % 2 == 0) {
        count++;
    }

    return count;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int S[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &S[i]);
    }

    int result = nonDivisibleSubset(S, n, k);
    printf("%d\n", result);

    return 0;
}

