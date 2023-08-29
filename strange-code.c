
#include <stdio.h>
#include <math.h>

long strangeCounter(long t) {
    // Find the cycle in which t falls
    long cycle = 0;
    while (3 * (pow(2, cycle) - 1) < t) {
        cycle++;
    }
    
    // Calculate the initial value of the current cycle
    long initialValue = 3 * (pow(2, cycle) - 1);
    
    // Calculate the value displayed at time t
    long value = initialValue - (t - (initialValue + 1));
    
    return value;
}

int main() {
    long t;
    scanf("%ld", &t);
    
    long result = strangeCounter(t);
    printf("%ld\n", result);
    
    return 0;
}
