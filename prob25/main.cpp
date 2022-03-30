#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, i, j, a[200], b[200];

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &(a[i]));
        b[i] = 1;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (a[j] > a[i])
                b[i]++;
        }
    }

    for (i = 1; i <= n; i++)
        printf("%d ", b[i]);

    return 0;
}