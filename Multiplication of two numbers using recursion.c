#include <stdio.h>

int multiply(int a, int b) {
    if (b == 0) return 0;
    if (b < 0) return -multiply(a, -b);
    return a + multiply(a, b - 1);
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Product = %d\n", multiply(x, y));
    return 0;
}

