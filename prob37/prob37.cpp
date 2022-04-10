#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int s, n, len = 0;
    int i, j, k, pos = 0;

    // 캐시 크기와 작업 개수 가져오기
    scanf("%d %d", &s, &n);

    // 작업 배열 가져오기
    vector<int> a(n);
    for (i = 0; i < n; i++)
        scanf("%d", &(a[i]));

    // 캐시 배열 초기화
    vector<int> c(s);

    for (i = 0; i < n; i++)
    {
        pos = -1;

        // Check cache hit or miss
        for (j = 0; j < len; j++)
        {
            if (a[i] == c[j])
                pos = j;
        }

        // cache hit
        if (pos != -1)
        {
            for (j = pos - 1; j >= 0; j--)
                c[j + 1] = c[j];
            c[0] = a[i];
        }

        // Cache miss
        else
        {
            for (j = len - 1; j >= 0; j--)
                c[j + 1] = c[j];
            c[0] = a[i];

            if (len < s)
                len++;
        }

        // Check cache memory
        for (j = 0; j < s; j++)
            printf("%d ", c[j]);
        printf("\n");
    }

    return 0;
}