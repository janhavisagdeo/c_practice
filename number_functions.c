#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Square
    printf("Square = %d\n", n * n);

    // Square root & cube root
    printf("Square root = %.2f\n", sqrt(n));
    printf("Cube root = %.2f\n", cbrt(n));

    // Prime check
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime: YES\n");
    else
        printf("Prime: NO\n");

    // Factorial
    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial = %lld\n", fact);
    }

    // Prime factors
    printf("Prime factors: ");
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    return 0;
}
