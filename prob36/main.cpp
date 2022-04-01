#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int a[100], n, tmp, i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &(a[i]));

    // 0번째는 건너뜀
    for (i = 1; i < n; i++)
    {
        // a[i]가 들어갈 자리를 역순으로 찾는다, 즉 i-1부터 0까지 찾음
        tmp = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            // 앞의 숫자가 tmp보다 크면 앞의 숫자를 한 칸 뒤로 땡긴다
            if (a[j] > tmp)
                a[j + 1] = a[j];

            // 그렇지 않으면 종료한다
            else
                break;
        }

        // 찾은 자리 + 1에 tmp를 삽입한다
        a[j + 1] = tmp;
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}