#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define task8

#ifdef task1

int main() {
    float radius, height, volume, p;
    scanf("%f %f", &radius, &height);
    p = 3.1415;
    volume = p * radius * radius * height;
    printf("%.2f", volume);
    return 0;
}
#endif task1 

#ifdef task2
int main() {
    float radius, height, area, p;
    scanf("%f %f", &radius, &height);
    p = 3.14;
    area = 2 * p * radius * (radius + height);
    printf("%.2f\n", area);
    return 0;
}

#endif task2

#ifdef task3

int main() {
    int minutes, hours, remaining_minutes;
    scanf("%d", &minutes);
    hours = minutes / 60;
    remaining_minutes = minutes % 60;
    printf("%d min = %d hours and %d min", minutes, hours, remaining_minutes);
    return 0;
}

#endif task3

#ifdef task4

int main() {
    float pounds, kilograms;
    scanf("%f", &pounds);
    kilograms = pounds * 0.4059;
    printf("%.2f\n", kilograms);
    return 0;
}

#endif task4

#ifdef task5

int main() {
    float versts, kilometers;
    scanf("%f", &versts);
    kilometers = versts * 1.066;
    printf("%.2f\n", kilometers);
    return 0;
}

#endif task5

#ifdef task6

int main() {
    float voltage, resistance, current;
    scanf("%f %f", &voltage, &resistance);
    current = voltage / resistance;
    printf("Sila toka: %.2f", current);
    return 0;
}

#endif task6

#ifdef task7

int main() {
    float weight, price_per_100g, total_price;
    scanf("%f %f", &weight, &price_per_100g);
    total_price = (weight / 100) * price_per_100g;
    printf("Total: %.2f\n", total_price);
    return 0;
}

#endif task7

#ifdef task8


int main() {
    float r1, r2, total_resistance;
    scanf("%f %f", &r1, &r2);
    total_resistance = (r1 * r2) / (r1 + r2);
    printf("Total res: %.2f", total_resistance);
    return 0;
}

#endif task8




