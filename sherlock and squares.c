#include <stdio.h>
#include <math.h>

// Function to count the number of square integers in a range
int squares(int a, int b) {
    int count = 0;
    int start = (int)ceil(sqrt(a));
    int end = (int)sqrt(b);
    
    for (int i = start; i <= end; i++) {
        count++;
    }
    
    return count;
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t);
    
    while (t--) {
        int a, b; // Range boundaries
        scanf("%d %d", &a, &b);
        
        int result = squares(a, b);
        printf("%d\n", result);
    }
    
    return 0;
}

