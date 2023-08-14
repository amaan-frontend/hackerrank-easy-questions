#include <stdio.h>

int workbook(int n, int k, int* arr) {
    int page = 1; // Page number
    int specialProblems = 0; // Count of special problems
    
    for (int i = 0; i < n; i++) {
        for (int problem = 1; problem <= arr[i]; problem++) {
            if (problem == page) {
                specialProblems++;
            }
            if (problem % k == 0 || problem == arr[i]) {
                page++;
            }
        }
    }
    
    return specialProblems;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = workbook(n, k, arr);
    printf("%d\n", result);
    
    return 0;
}

