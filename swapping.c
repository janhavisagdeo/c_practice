#include <stdio.h>

// WITHOUT pointers (call by value)
void swap_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_value: a=%d b=%d\n", a, b);
}

// WITH pointers (call by reference)
void swap_pointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x=%d y=%d\n", x, y);

    // Call without pointers
    swap_value(x, y);
    printf("After swap_value: x=%d y=%d\n", x, y);

    // Call with pointers
    swap_pointer(&x, &y);
    printf("After swap_pointer: x=%d y=%d\n", x, y);

    return 0;
}
