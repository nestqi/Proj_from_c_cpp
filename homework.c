#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define contest5

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

#ifdef contest3

int main() {
    int N, i, j;

    scanf("%d", &N);
    for (i = N; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


#endif // contest3

#ifdef contest5

int main()
{
    int N, M, revers = 0, temp;
    scanf("%d %d", &N, &M);

    temp = N;
    while (temp != 0) {
        revers = revers * 10 + temp % 10;
        temp = temp / 10;
    }
    
    while (revers < M) {
        revers = revers * 10;
    }

    if (revers == M) {
        printf("Yes");
    }
    else {
        printf("No");
    }


}


#endif // contest5
