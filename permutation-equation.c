#include <stdio.h>

int* permutationEquation(int p_count, int* p, int* result_count) {
    int* result = (int*)malloc(p_count * sizeof(int));
    
    for (int x = 1; x <= p_count; x++) {
        int px = -1;
        for (int i = 0; i < p_count; i++) {
            if (p[p[i] - 1] == x) {
                px = p[i];
                break;
            }
        }
        
        for (int i = 0; i < p_count; i++) {
            if (p[i] == px) {
                result[x - 1] = i + 1;
                break;
            }
        }
    }
    
    *result_count = p_count;
    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    int p[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    int result_count;
    int* result = permutationEquation(n, p, &result_count);

    for (int i = 0; i < result_count; i++) {
        printf("%d\n", result[i]);
    }

    free(result);
    return 0;
}
