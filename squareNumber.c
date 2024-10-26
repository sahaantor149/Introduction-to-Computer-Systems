#include <stdio.h>

int main() {
    int n, square;
    printf("Enter a number: ");
    scanf("%d", &n);
    square = n * n;
    printf("Square of %d is %d\n", n, square);
    return 0;
}
