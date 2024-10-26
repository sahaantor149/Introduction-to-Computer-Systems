#include <stdio.h>

int main() {
    int n, cube;
    printf("Enter a number: ");
    scanf("%d", &n);
    cube = n * n * n;
    printf("Cube of %d is %d\n", n, cube);
    return 0;
}
