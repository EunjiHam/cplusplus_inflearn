#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, i, max = 0, cnt = 0;
    int a[101] = {
        0,
    };

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &(a[i]));
    }

    max = a[n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        if (a[i] > max)
        {
            max = a[i];
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}