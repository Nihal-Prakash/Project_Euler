#include <stdio.h>

int main() {
    long a = 1;  // First Fibonacci number
    long b = 2;  // Second Fibonacci number
    long sum = 0;

    while (b < 4000000) {
        if (b % 2 == 0) {
            sum += b;
        }
        long next = a + b;  // Calculate the next Fibonacci number
        a = b;
        b = next;
    }

    printf("The sum of even Fibonacci numbers below 4000000 is: %d\n", sum);
    return 0;
}
