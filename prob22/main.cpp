#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, k, i, j, sum = 0, max = -2147000000;

    scanf("%d %d", &n, &k);

    vector<int> a(n);

    for (i = 0; i < n; i++)
        scanf("%d", &(a[i]));

    for (i = 0; i < k; i++)
        sum += a[i];

    max = sum;

    for (i = k; i < n; i++)
    {
        sum = sum + (a[i] - a[i - k]);

        if (sum > max)
            max = sum;
    }

    printf("%d\n", max);

    return 0;
}