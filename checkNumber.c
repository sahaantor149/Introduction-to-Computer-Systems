#include <stdio.h>

int main ()
{
    int num;

    printf("Enter the the number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is positive.\n", num);
    else if (num < 0)
        printf("%d is negative.\n", num);
    else
        printf("%d is zero\n", num);

    return 0;
}
