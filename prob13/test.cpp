#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);

    int num[10] = {
        0,
    };

    int i, n, max = -2147000000, res = -1;

    scanf("%d", &n);

    while (n > 0)
    {
        num[n % 10]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (max < num[i])
        {
            max = num[i];
            res = i;
        }

        if (max == num[i])
        {
            if (res < i)
                res = i;
        }
    }

    printf("%d\n", res);

    return 0;
}