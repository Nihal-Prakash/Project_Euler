#include <stdio.h>

int main() {
    int sum = 0;
    int sumsq = 0;

    // Calculate the sum of squares
    for (int i = 0; i <= 100; i++) {
        sumsq += i * i;
    }

    // Calculate the sum
    for (int i = 0; i <= 100; i++) {
        sum += i;
    }

    // Calculate the square of the sum
    int squareOfSum = sum * sum;

    // Calculate the difference
    int difference = squareOfSum - sumsq;

    printf("The difference is: %d\n", difference);

    return 0;
}
