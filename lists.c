#include <stdio.h>

int main() {
    int n, i, num;
    int even[100], odd[100];
    int e = 0, o = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            even[e++] = num;
        } else {
            odd[o++] = num;
        }
    }

    // Print even numbers
    printf("Even numbers: ");
    for (i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    // Print odd numbers
    printf("\nOdd numbers: ");
    for (i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
