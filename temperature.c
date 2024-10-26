#include <stdio.h>

int main() {
    int temperature;

    printf("Enter the temperature: ");
    scanf("%d", &temperature);

    if (temperature < 0)
    {
        printf("Freezing\n");
    } else if (temperature < 15)
    {
        printf("Cold\n");
    } else if (temperature < 26)
    {
        printf("Warm\n");
    } else if (temperature < 36)
    {
        printf("Hot\n");
    } else
    {
        printf("Very Hot\n");
    }
    
    
    
    
    
}