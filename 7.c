#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool chkp(int n);

int main() {
    int count = 1;  // Starting count at 1 since 2 is the first prime
    int num = 1;    // Starting from 1, the first odd number to check

    while (count < 10001) {
        num += 2;  // Check only odd numbers
        if (chkp(num)) {
            count++;
        }
    }

    printf("The 1400th prime number is: %d\n", num);

    return 0;
}

bool chkp(int n) {
    if (n < 2) return false;
    if (n == 2) return true;  // 2 is prime
    if (n % 2 == 0) return false;  // Exclude even numbers

    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {  // Check only odd numbers up to the square root of n
        if (n % i == 0) {
            return false;
        }
    }
    return true;  // Return true if no divisors were found
}
