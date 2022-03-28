#include <stdio.h>

int main()
{
    int n, i, cnt = 0;
    int digit = 1, cur = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == (cur * 10))
        {
            digit++;
            cur = cur * 10;
        }

        cnt += digit;
    }

    printf("%d\n", cnt);

    return 0;
}