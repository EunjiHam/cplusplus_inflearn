#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int C[20] = {
        0,
    };

    int s, n, a, i, j, pos;

    scanf("%d %d", &s, &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        pos = -1;

        // check Cache Miss or Hit
        for (j = 0; j < s; j++)
        {
            if (C[j] == a)
                pos = j;
        }

        // Cache Miss
        if (pos == -1)
        {
            for (j = s - 1; j >= 1; j--)
                C[j] = C[j - 1];
        }

        // Cache Hit
        else
        {
            for (j = pos; j >= 1; j--)
                C[j] = C[j - 1];
        }

        C[j] = a;
    }

    for (i = 0; i < s; i++)
        printf("%d ", C[i]);

    return 0;
}