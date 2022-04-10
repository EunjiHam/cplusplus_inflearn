#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, i, j, tmp;

    // 배열의 개수 가져오기
    scanf("%d", &n);

    // 배열 가져오기
    vector<int> a(n);
    for (i = 0; i < n; i++)
        scanf("%d", &(a[i]));

    // 버블정렬을 이용해 정렬하기
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            // 앞의 숫자가 양수, 뒤의 숫자가 음수일때만 swap
            if (a[j] > 0 && a[j + 1] < 0)
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    // 배열 출력
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}