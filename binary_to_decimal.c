#include <stdio.h>

int main()
{
    int n, decimal = 0, base = 1, digit;

    scanf("%d", &n);

    while(n != 0){
        digit = n % 10;
        decimal = decimal + digit * base;
        base = base * 2;
        n = n / 10;
    }

    printf("%d", decimal);

    return 0;
}
