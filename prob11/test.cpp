#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int tmp = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        tmp = i;
        while (tmp > 0)
        {
            sum++;
            tmp /= 10;
        }
    }

    printf("%d\n", sum);

    return 0;
}