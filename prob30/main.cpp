#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, lt = 1, cur, rt, k = 1, res = 0;

    scanf("%d", &n);

    while (lt != 0)
    {
        lt = n / (k * 10);
        cur = (n / k) % 10;
        rt = n % k;

        printf("lt, cur, rt = %d, %d, %d\n", lt, cur, rt);

        if (cur > 3)
            res += (lt + 1) * k;
        else if (cur < 3)
            res += lt * k;
        else
            res += lt * k + (rt + 1);

        k = k * 10;
    }

    printf("%d\n", res);

    return 0;
}