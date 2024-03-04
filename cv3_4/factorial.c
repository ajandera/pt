#include <stdio.h>

// Function to calculate factorial recursively
// n! = n*(n-1)*(n-2) * ... * (n-(n-1))
int factorial(int n) {
    // Base case: factorial of 0 and 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive call
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int fact = factorial(num);
        printf("Factorial of %d is %d.\n", num, fact);
    }

    return 0;
}