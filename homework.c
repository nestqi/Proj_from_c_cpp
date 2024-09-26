#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define task4

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
wffwqwe
#endif task4


