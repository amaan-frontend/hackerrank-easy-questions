#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int num) {
    int root = sqrt(num);
        return (root * root == num);
        }
        
        // Function to count the number of square integers in the range [a, b]
        int squares(int a, int b) {
        int count = 0;
        for (int i = a; i <= b; i++) {
        if (isPerfectSquare(i)) {
        count++;
        }
            }
        return count;
         }
                                                
        int main() {
        int t; // Number of test cases
         scanf("%d", &t);
                                                            
        while (t--) {
        int a, b; // Starting and ending integers in the ranges
        scanf("%d %d", &a, &b);
                                                                                
        int result = squares(a, b);
        printf("%d\n", result);
            }
                                                                                                    
        return 0;
                         }
