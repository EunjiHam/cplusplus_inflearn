#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, i, j, ind, tmp;
    int cnt = 1;

    // 배열의 개수 가져오기
    scanf("%d", &n);

    // 배열 가져오기
    vector<int> a(n);
    for (i = 0; i < n; i++)
        scanf("%d", &(a[i]));

    // 선택정렬로 배열 내림차순 정렬하기
    for (i = 0; i < n - 1; i++)
    {
        ind = i;
        for (j = i + 1; j < n; j++)
        {
            // i+1번부터 n번 중 최소값을 찾고 그 인덱스를 저장
            if (a[j] > a[ind])
                ind = j;
        }

        // swap(a[i], a[ind])
        tmp = a[i];
        a[i] = a[ind];
        a[ind] = tmp;
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    // 배열 중 3등의 점수를 출력하기
    for (i = 1; i < n; i++)
    {
        // a[i - 1]과 a[i]가 다를 경우 cnt 증가
        if (a[i - 1] != a[i])
            cnt++;

        // cnt가 3일 경우 점수를 출력하고 종료
        if (cnt == 3)
        {
            printf("%d\n", a[i]);
            return 0;
        }
    }

    return 0;
}