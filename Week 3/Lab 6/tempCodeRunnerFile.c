#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("Below 0 degrees C: Freezing\n");
    } else if (temperature >= 0 && temperature <= 10) {
        printf("0 degrees C to 10 degrees C: Cold\n");
    } else if (temperature >= 11 && temperature <= 20) {
        printf("11 degrees C to 20 degrees C: Cool\n");
    } else if (temperature >= 21 && temperature <= 30) {
        printf("21 degrees C to 30 degrees C: Warm\n");
    } else if (temperature > 30) {
        printf("Above 30 degrees C: Hot\n");
    }

    return 0;
}