#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define contest6


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

#ifdef contest2

int main()
{
    int N, count = 0, d;
    scanf("%d", &N);
    while (N > 0)
    {
        d = 0;
        for (int i = 2; i <= (sqrt(N) + 1); i++)
        {
            if (N % i == 0)
            {
                d++;
            }
            if (d == 1)
            {
                break;
            }
        }
        if (d == 0)
            count++;
        N--;
    }
    printf("%d", count);
    return 0;
}

#endif // contest2

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

#ifdef contest4

int main() {
    unsigned int N;
    scanf("%u", &N);

    int max = 0;

    while (N > 0) {
        int d = N % 10;
        if (d > max) {
            max = d;
        }
        N /= 10;
    }
    printf("%d\n", max);
    return 0;
}

#endif // contest4

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

#ifdef contest6


int main() {
    int N, M, K;

    scanf("%d %d", &N, &M);

    while (1) 
    {
        scanf("%d", &K);

        if (K <= 0)
        {
            printf("You are full\n");
            break;
        }

        if (K <= N * M && (K % N == 0 || K % M == 0)) 
        {
            if (K % M == 0)
            {
                N -= K / M;
            }
            else
            {
                M -= K / N;
            }

            if (N == 0 || M == 0)
            {
                printf("Chocolate is over\n");
                break;
            }

            printf("%d %d\n", N, M);
        }
        else 
        {
            printf("%d %d\n", N, M);
        }
    }

    return 0;
}
#endif // contest6

#ifdef contest7

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <=n;i++){
        for (int j = i; j <= n; j++){
            for (int k = j; k <= n; k++){
                if (i * i + j * j == k * k) {
                    printf("%d %d %d\n", i, j, k);
                }
           

            }
        

        }


    }
}

#endif // contest7

#ifdef contest8

int main()
{
    int d, summa = 0, last = 0;
    while (1) 
    {
        scanf("%d", &d);

        if (d == -1)
        {
            break;
        }

        summa += d;

        if (d % 2 == 0)
        {
            last = 1;
        }

        if (summa % 3 == 0 && last)
        {
            printf("Stop\n");
            break;
        }
        else
        {
            printf("No\n");
        }

    }
}

#endif // contest8

#ifdef contest9

#endif // contest9


#ifdef contest10

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("No\n");
    }
    else if (a == b && b == c && a == c)
    {
        printf("Yes\n");
    }
    else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) 
    {
        printf("Yes\n");
    }
    else 
    {
        printf("No\n");
    }
    return 0;
}

#endif // contest10
