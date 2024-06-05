#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is 1 to 9 pandigital
bool isPandigital(char *str) {
    int len = strlen(str);
    if (len != 9) return false;

    int digitCount[10] = {0}; // count digits from 0 to 9 (0-indexed)
    for (int i = 0; i < len; i++) {
        if (str[i] < '1' || str[i] > '9') return false;
        digitCount[str[i] - '0']++;
    }

    // Check if each digit from 1 to 9 is exactly once
    for (int i = 1; i <= 9; i++) {
        if (digitCount[i] != 1) return false;
    }
    return true;
}

int main() {
    long largestPandigital = 0;

    // Iterate over possible base numbers
    for (int i = 1; i < 10000; i++) {
        char concatenatedProduct[20] = ""; // temporary string to hold concatenated product
        int n = 1;

        while (strlen(concatenatedProduct) < 9) {
            char buffer[10];
            sprintf(buffer, "%d", i * n);
            strcat(concatenatedProduct, buffer);
            n++;
        }

        if (strlen(concatenatedProduct) == 9 && isPandigital(concatenatedProduct)) {
            long pandigitalNumber = atol(concatenatedProduct);
            if (pandigitalNumber > largestPandigital) {
                largestPandigital = pandigitalNumber;
            }
        }
    }

    printf("The largest 1 to 9 pandigital number is: %ld\n", largestPandigital);

    return 0;
}
