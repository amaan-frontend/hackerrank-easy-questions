#include <stdio.h>
#include <stdlib.h>

long long int min(long long int a, long long int b) {
    return (a < b) ? a : b;
    }
    
    long long int taumBday(int b, int w, int bc, int wc, int z) {
        // Calculate the cost of buying black and white gifts without converting
            long long int costWithoutConversion = (long long int)b * (long long int)bc + (long long int)w * (long long int)wc;
            
                // Calculate the cost of buying black gifts and converting to white
                    long long int costWithConversion = (long long int)b * min(bc, wc + z) + (long long int)w * min(wc, bc + z);
                    
                        // Return the minimum cost
                            return min(costWithoutConversion, costWithConversion);
                            }
                            
                            int main() {
                                int t;
                                    scanf("%d", &t);
                                    
                                        while (t--) {
                                                int b, w, bc, wc, z;
                                                        scanf("%d %d", &b, &w);
                                                                scanf("%d %d %d", &bc, &wc, &z);
                                                                
                                                                        long long int result = taumBday(b, w, bc, wc, z);
                                                                                printf("%lld\n", result);
                                                                                    }
                                                                                    
                                                                                        return 0;
                                                                                        }
                                                                                        
                                                                                        
