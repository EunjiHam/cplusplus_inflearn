#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int n;

// 좌표 배열과 최소 길이가 주어졌을 때 가능한 말의 개수를 리턴
int Count(int len, int x[])
{
    int i, cnt = 1, pos = x[1];
    for (i = 2; i <= n; i++)
    {
        if (x[i] - pos >= len)
        {
            cnt++;
            pos = x[i];
        }
    }

    return cnt;
}

int main()
{
    freopen("input.txt", "rt", stdin);

    int m, i, lt = 1, rt, mid, res;

    scanf("%d %d", &n, &m);

    int *x = new int[n + 1];

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &(x[i]));
    }
    sort(x + 1, x + n + 1);
    rt = x[n];

    while (lt <= rt)
    {
        mid = (lt + rt) / 2;

        // Count로 센 말의 개수가 주어진 말의 개수보다 크거나 같을 경우 lt를 증가
        if (Count(mid, x) >= m)
        {
            res = mid;
            lt = mid + 1;
        }

        // 그렇지 않을 경우 rt를 감소
        else
            rt = mid - 1;
    }

    printf("%d\n", res);

    delete[] x;

    return 0;
}