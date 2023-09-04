
#include <stdio.h>

int utopianTree(int n) {
    int height = 1;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            // Spring cycle: Double the height
            height *= 2;
        } else {
            // Summer cycle: Increase height by 1 meter
            height += 1;
        }
    }
    
    return height;
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t);
    
    while (t--) {
        int n; // Number of growth cycles
        scanf("%d", &n);
        
        int result = utopianTree(n);
        printf("%d\n", result);
    }
    
    return 0;
}
