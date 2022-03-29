#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, a, val, i, cnt = 0, max = -2147000000;

    scanf("%d %d", &n, &val);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > val)
            cnt++;
        else
            cnt = 0;

        if (cnt > max)
            max = cnt;
    }

    if (max == 0)
        printf("-1\n");
    else
        printf("%d\n", max);

    return 0;
}