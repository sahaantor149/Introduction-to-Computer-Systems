#include <stdio.h>

int main() {
    float bdt, convertedAmount;
    int choice;
    const float usdRate = 0.0084;
    const float eurRate = 0.0077;

    printf("Enter the amount in BDT: ");
    scanf("%f", &bdt);

    printf("Choose the conversion option:\n");
    printf("1. BDT to USD\n");
    printf("2. BDT to EUR\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        convertedAmount = bdt * usdRate;
        printf("%.2f BDT is equal to %.2f USD\n", bdt, convertedAmount);
    } else if (choice == 2) {
        convertedAmount = bdt * eurRate;
        printf("%.2f BDT is equal to %.2f EUR\n", bdt, convertedAmount);
    } else {
        printf("Invalid choice! Please choose either 1 or 2.\n");
    }

    return 0;
}
