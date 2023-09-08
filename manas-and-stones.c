#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* stones(int n, int a, int b, int* result_count) {
    int *result = (int *)malloc(1000 * sizeof(int));
    int index = 0;

    for (int i = 0; i < n; i++) {
        int val = (n - 1 - i) * a + i * b;
        result[index++] = val;
    }

    qsort(result, index, sizeof(int), compare);
    *result_count = index;
    return result;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        int result_count;
        int* result = stones(n, a, b, &result_count);

        for (int i = 0; i < result_count; i++) {
            printf("%d ", result[i]);
        }

        free(result);
        printf("\n");
    }

    return 0;
}

