#include <stdio.h>
#include <iostream>
using namespace std;

int digit_sum(int x)
{
    int sum = 0;

    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main()
{
    freopen("input.txt", "rt", stdin);

    int i, n, src, num, sum, max = -2147000000;

    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> src;
        sum = digit_sum(src);

        if (max < sum)
        {
            num = src;
            max = sum;
        }

        if (max == sum)
        {
            if (num < src)
            {
                num = src;
            }
        }
    }

    printf("%d\n", num);

    return 0;
}