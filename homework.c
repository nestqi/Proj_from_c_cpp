#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define contest1

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

#ifdef contest1

int main() {
    int N, i, num;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &num);

        if (num % 3 == 0) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }

    return 0;
}
#endif // contest

