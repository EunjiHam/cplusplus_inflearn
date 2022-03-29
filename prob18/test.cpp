#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, m, i, a, cnt = 0, max = -2147000000;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);

        if (a > m)
        {
            cnt++;
        }
        else
        {
            if (cnt > 0 && cnt > max)
            {
                max = cnt;
            }
            cnt = 0;
        }
    }

    if (max < 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", max);
    }

    return 0;
}