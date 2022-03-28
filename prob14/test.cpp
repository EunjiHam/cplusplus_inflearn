#include <stdio.h>

int reverse(int x)
{
    int res = 0;

    while (x > 0)
    {
        res = res * 10 + (x % 10);
        x = x / 10;
    }

    return res;
}

bool isPrime(int x)
{
    int i;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

int main()
{
    freopen("input.txt", "rt", stdin);

    int i, n, num, res;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        res = reverse(num);

        if (true == isPrime(res))
            printf("%d ", res);
    }

    return 0;
}