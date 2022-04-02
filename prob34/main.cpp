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

    // 버블정렬
    // 맨 뒤에서부터 정렬됨
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            // 앞의 숫자가 뒤의 숫자보다 클 경우 swap
            if (a[j] > a[j + 1])
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