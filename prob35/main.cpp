#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int a[101], n, i, j, tmp;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &(a[i]));

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            // 앞이 양수 뒤가 음수일때만 자리 변경하기
            if (a[j] > 0 && a[j + 1] < 0)
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}