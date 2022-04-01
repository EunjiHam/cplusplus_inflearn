#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int a[100], n, idx, i, j, tmp;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &(a[i]));

    for (i = 0; i < n - 1; i++)
    {
        idx = i;

        // a[idx]: 현재 배열 중 가장 작은 값
        for (j = i + 1; j < n; j++)
        {
            // a[idx]보다 작은 a[j]가 있다면 idx에 j를 저장
            if (a[j] < a[idx])
                idx = j;
        }

        // swap(a[ind], a[j])
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}