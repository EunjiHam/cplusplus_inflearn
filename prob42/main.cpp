#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, key, i, lt = 0, rt, mid;

    scanf("%d %d", &n, &key);
    vector<int> a(n);

    for (i = 0; i < n; i++)
        scanf("%d", &(a[i]));
    sort(a.begin(), a.end());

    rt = n - 1;

    // lt와 rt가 교차되면 배열 내에 key가 없음
    while (lt <= rt)
    {
        mid = (lt + rt) / 2;

        // mid가 key인 경우 종료
        if (a[mid] == key)
        {
            printf("%d\n", mid + 1);
            return 0;
        }

        // mid가 key보다 큰 경우 rt를 mid - 1로 변경
        else if (a[mid] > key)
            rt = mid - 1;

        // mid가 key보다 작은 경우 lt를 mid + 1 로 변경
        else
            lt = mid + 1;
    }

    return 0;
}