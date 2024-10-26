#include <stdio.h>

int main() {
    int choice;
    float temperature;

    printf("Temperature Converter\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Choose an option (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            float fahrenheit = (temperature * 9 / 5) + 32;
            printf("%.2f°C is equal to %.2f°F\n", temperature, fahrenheit);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            float celsius = (temperature - 32) * 5 / 9;
            printf("%.2f°F is equal to %.2f°C\n", temperature, celsius);
            break;

        default:
            printf("Invalid choice. Please select 1 or 2.\n");
            break;
    }

    return 0;
}
