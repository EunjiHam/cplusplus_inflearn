#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, k, pos = 0, i, bp = 0, cnt = 0;

    scanf("%d %d", &n, &k);

    vector<int> prince(n + 1);

    while (1)
    {
        pos++;

        // pos가 n보다 커지면 pos를 시작 위치 1로 변경
        if (pos > n)
            pos = 1;

        // prince[pos]가 0이면 cnt를 증가
        if (prince[pos] == 0)
        {
            cnt++;

            // cnt가 k일 경우 pos 위치의 배열값을 1로 변경
            // cnt 초기화
            // break point 증가
            if (cnt == k)
            {
                prince[pos] = 1;
                cnt = 0;
                bp++;
            }
        }

        // break point의 개수가 n-1이 될 경우 while문 종료
        if (bp == n - 1)
            break;
    }

    // 1 ~ n-1 중 배열의 값이 0인 위치를 반환
    for (i = 1; i <= n; i++)
    {
        if (prince[i] == 0)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}