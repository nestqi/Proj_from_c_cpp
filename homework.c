#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define task6

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



