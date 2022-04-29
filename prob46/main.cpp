#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[2001];

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, k, i, p = 0, cnt = 0, tot = 0;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &(a[i]));
        tot += a[i];
    }

    scanf("%d", &k);

    // 정전이 발생한 시간이 전체 시간보다 크거나 같을 경우 작업할 것이 없으므로 -1 반환
    if (k >= tot)
    {
        printf("-1\n");
        return 0;
    }

    while (1)
    {
        // pos를 증가, pos가 n보다 클 경우 pos를 1로 초기화
        p++;
        if (p > n)
            p = 1;

        // a[p]가 0인 경우 아래 코드를 실행하지 않고 처음 반복문으로 돌아가기
        if (a[p] == 0)
            continue;

        // a[p]값 감소, cnt 증가
        a[p]--;
        cnt++;

        // cnt가 k와 같으면 반복문 종료
        if (cnt == k)
            break;
    }

    // p: 정전이 발생하기 전의 마지막 위치
    while (1)
    {
        // p 증가
        p++;

        // p가 n보다 클 경우 p를 1로 초기화
        if (p > n)
            p = 1;

        // a[p]가 0이 아닐 경우 반복문 종료
        if (a[p] != 0)
            break;
    }

    // p: 정전이 발생한 후 최초 작업 위치
    printf("%d\n", p);

    return 0;
}