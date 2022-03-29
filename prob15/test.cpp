#include <stdio.h>

bool isPrime(int x)
{
    int i;

    if (x == 1)
        return false;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n, i, cnt = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (isPrime(i))
            cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}