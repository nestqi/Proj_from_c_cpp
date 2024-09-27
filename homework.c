#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define task2

#ifdef task1

int main() {
    int n, i;
    unsigned long long factorial = 1;
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }

    printf("%llu\n",factorial);
    return 0;
}
#endif task1 

#ifdef task2
int main()
{
    int n, i, prostoe = 1;
    scanf("%d", &n);

    if (n <= 1) {
        prostoe = 0;
    } else {
        for (i = 2; i <= n / 2; i++){
            if (n % i == 0) {
                prostoe = 0;
                break;

            }
        }
    }

    if (prostoe)
        printf("%d - prost\n", n);
    else
        printf("%d - ne prost\n", n);

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

#ifdef task9

int main() {
    float length, width, area;
    scanf("%f %f", &length, &width);
    area = length * width;
    printf("%.2f", area);
    return 0;
}

#endif task9

#ifdef task10

int main() {
    float weight, price_per_kg, total_price;
    scanf("%f %f", &weight, &price_per_kg);
    total_price = weight * price_per_kg;
    printf("Price: %.2f\n", total_price);
    return 0;
}

#endif task10

#ifdef task11

int main() {
    float distance, fuel_consumption, fuel_price, total_cost;
    scanf("%f %f", &distance, &fuel_consumption);
    fuel_price = 55.5;
    total_cost = (distance * 2 * fuel_consumption / 100) * fuel_price;
    printf("Price %.2f", total_cost);
    return 0;
}

#endif task11

#ifdef task12

int main() {
    float length, width, height, volume;
    scanf("%f %f %f", &length, &width, &height);
    volume = length * width * height;
    printf("V: %.2f", volume);
    return 0;
}

#endif task12







