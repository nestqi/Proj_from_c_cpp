#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define contest4

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

#ifdef contest3

int main()
{
    int N = 0, cnt = 0, flag= 0;
    scanf("%d", &N);


    for (int i = 1; i <= N; i++) 
    {
        for (int d = 2; d <= (sqrt(i) + 1); d++) 
        {
            flag = 0;
            if (i % d == 0) 
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) 
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}


#endif // contest3

#ifdef contest4
#include <stdio.h>

int main() {
    int X[1000];
    int N = 0, cnt = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < N; i++)
    {
        int left = X[(i - 1 + N) % N];
        int right = X[(i + 1) % N];
        if (X[i] < left && X[i] < right)
        {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
#endif // contest4

#ifdef contest5
int main()
{
    int X[1000], Y[1000], Z[1000];
    int nX = 0, nZ = 0, nY = 0;
    int k = 0;

    scanf("%d", &nX);
    for (int i = 0; i < nX; i++)
    {
        scanf("%d", &X[i]);
    }

    scanf("%d", &nY);
    for (int i = 0; i < nY; i++)
    {
        scanf("%d", &Y[i]);
    }

    for (int i = 0; i < nX; i++)
    {
        for (int j = 0; j < nY; j++)
        {
            if (X[i] == Y[j])
            {
                int flag = 0;
                for (int k = 0; k < nZ; k++)
                {
                    if (Z[k] == X[i])
                    {
                        flag = 1;
                        break;
                    }
                }

                if (!flag)
                {
                    Z[nZ] = X[i];
                    nZ++;
                }

                break;
            }
        }
    }
    for (int i = 0; i < nZ; i++)
    {
        k++;
    }
    printf("%d\n", k);
    for (int i = 0; i < nZ; i++)
    {
        printf("%d\n", Z[i]);
    }


}

#endif // contest5
