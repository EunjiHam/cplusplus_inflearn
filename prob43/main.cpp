#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[1001], n;

// 크기 s로 배열을 나누었을 때의 개수를 반환
int count(int s)
{
    int i, cnt = 1, sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (sum + a[i] > s)
        {
            cnt++;
            sum = a[i];
        }
        else
            sum = sum + a[i];
    }

    return cnt;
}

int main()
{
    freopen("input.txt", "rt", stdin);

    int m, i, lt = 1, rt = 0, mid, res, max = -21470000;
    scanf("%d %d", &n, &m);

    // rt에 a[i]의 총 합을 계산
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        rt = rt + a[i];
        if (a[i] > max)
            max = a[i];
    }

    // 이분탐색으로 lt가 rt보다 커지면 함수 종료
    while (lt <= rt)
    {
        mid = (lt + rt) / 2;

        // DVD에는 최소 한 개의 곡이 추가되어야 하므로 mid가 배열의 최댓값보다 큰지 확인해야함
        // mid 크기로 분리했을 때의 개수가 m보다 작거나 같으면 정답
        // mid 크기를 줄이기 위해 rt를 mid - 1로 변환
        if (mid >= max && count(mid) <= m)
        {
            res = mid;
            rt = mid - 1;
        }

        // mid 크기로 분리했을 때의 개수가 m보다 크면 mid의 크기를 키워야 하므로 lt를 mid + 1로 변환
        else
            lt = mid + 1;
    }

    printf("%d\n", res);

    return 0;
}