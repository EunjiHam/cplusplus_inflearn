#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[1501];

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, i, p2, p3, p5, min = 2147000000;

    scanf("%d", &n);

    a[1] = 1;
    p2 = p3 = p5 = 1;

    for (i = 2; i <= n; i++){
        // 최소값 찾기
        if (a[p2] * 2 < a[p3] * 3)
            min = a[p2] * 2;
        else 
            min = a[p3] * 3;

        if (a[p5] * 5 < min)
            min = a[p5] * 5;

        // 최소값이 되는 지점에 포인트를 증가 (중복 가능)
        if (a[p2] * 2 == min)
            p2++;
        if (a[p3] * 3 == min)
            p3++;
        if (a[p5] * 5 == min)
            p5++;

        // 최소값을 a[i]로 저장 
        a[i] = min;
    }

    printf("%d\n", a[n]);

    return 0;
}