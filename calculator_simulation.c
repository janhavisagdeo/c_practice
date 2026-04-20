#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b, result;
    int n, i;
    long long fact;

    printf("Simple Calculator\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Factorial\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            if (b != 0)
                printf("Result = %.2lf", a / b);
            else
                printf("Division by zero error");
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &a, &b);
            result = pow(a, b);
            printf("Result = %.2lf", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
            if (n < 0) {
                printf("Factorial not defined");
            } else {
                fact = 1;
                for (i = 1; i <= n; i++)
                    fact *= i;
                printf("Factorial = %lld", fact);
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
