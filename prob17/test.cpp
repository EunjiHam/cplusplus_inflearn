#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, num, sum, res, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        scanf("%d", &sum);

        res = num * (num + 1) / 2;
        if (res != sum)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}