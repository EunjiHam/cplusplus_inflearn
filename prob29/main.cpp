#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, tmp, i, cnt = 0, digit;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        tmp = i;
        while (tmp > 0)
        {
            digit = tmp % 10;
            if (digit == 3)
                cnt++;

            tmp = tmp / 10;
        }
    }

    printf("%d\n", cnt);

    return 0;
}