#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define contest2

#ifdef test

int main()
{
    int d;
    d = 5;
    printf("%1000d", d);
    return 0;
}
#endif // test

#ifdef task1

int main()
{
    int arr[14], sum = 0, cnt = 0;

    for (int i = 0; i < 14; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 14; i++)
    {
        if (arr[i] > 0 && arr[i] % 2 == 0)
        {
            sum += arr[i];
            cnt += 1;
        }
    }
    
    printf("kol-vo %d\n", cnt);
    printf("summa %d\n", sum);

    return 0;
}

#endif // task1


#ifdef contest1

int main()
{
    int n = 0;
    scanf("%d", &n);
    int x[1000];
    for (int i = 0; i < n; i++) {
        int a = 0;
        scanf("%d", &a);
        x[i] = a;
    }
    for (int i = (n - 1); i >= 0; i--) {
        int b = 0;
        b = x[i] * x[i];
        printf("%d\n", b);
    }
}

#endif // contest1

#ifdef contest2

int main()
{
    int N = 0, K = 0, minraz = 1000000, nom = 0;
    scanf("%d", &N);

    int x[1000];

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &x[i]);
    }

    scanf("%d", &K);
    K = abs(K);

    for (int i = 0; i < N; i++) 
    {
        int b = abs(x[i]);
        if (abs(b - K) < minraz) 
        {
            minraz = abs(b - K);
            nom = (i + 1);
        }
    }
    printf("%d", nom);
}
#endif // contest2
