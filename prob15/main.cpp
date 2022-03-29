#include <stdio.h>

// 1부터 N까지의 소수의 개수를 세기 위해서는 N의 제곱근까지만 확인하면 된다!

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, i, j, flag, cnt = 0;

    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        flag = 1;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}