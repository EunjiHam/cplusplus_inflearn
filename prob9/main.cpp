#include <stdio.h>

int main()
{
    int cnt[50001] = {
        0,
    };
    int i, j, N;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        for (j = i; j <= N; j = j + i)
        {
            cnt[j]++;
        }
    }

    for (i = 1; i <= N; i++)
    {
        printf("%d ", cnt[i]);
    }

    return 0;
}