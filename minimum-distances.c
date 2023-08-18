#include <stdio.h>
#include <stdlib.h>

int minimumDistances(int a_count, int* a) {
    int minDistance = a_count; // Initialize with a large value
    for (int i = 0; i < a_count; i++) {
        for (int j = i + 1; j < a_count; j++) {
            if (a[i] == a[j]) {
                int distance = j - i;
                if (distance < minDistance) {
                    minDistance = distance;
                }
            }
        }
    }
    
    if (minDistance == a_count) {
        return -1; // No matching elements found
    } else {
        return minDistance;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = minimumDistances(n, arr);
    printf("%d\n", result);
    
    free(arr);
    
    return 0;
}

