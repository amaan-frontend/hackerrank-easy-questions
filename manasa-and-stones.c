#include <stdio.h>
#include <stdlib.h>

void findLastStones(int n, int a, int b) {
    if (a == b) {
    printf("%d\n", (n - 1) * a);
    return;
    }
                        
    int minDiff = a < b ? a : b;
    int maxDiff = a > b ? a : b;
                                
    for (int i = 0; i < n; i++) {
    int result = (n - 1 - i) * minDiff + i * maxDiff;
    printf("%d ", result);
    }
    printf("\n");
    }
                                                            
    int main() {
    int t;
    scanf("%d", &t);
                                                                    
    while (t--) {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
                                                                                        
    findLastStones(n, a, b);                                                                                             }                     
 return 0;
  }

