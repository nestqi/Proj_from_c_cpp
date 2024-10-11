#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define test

#ifdef test

int main()
{
    int d;
    d = 5;
    printf("%1000d", d);
    return 0;
}
#endif // test

