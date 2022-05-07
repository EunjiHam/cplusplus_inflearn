#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[11][11], b[11];

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, i, j, sum = 0;

    scanf("%d", &n);

    // 정면 값 가져오기
    for (i = 1; i <= n; i++)
        scanf("%d", &(b[i]));

    // a의 i번째 열에 b[i]를 대입
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            a[j][i] = b[i];
        }
    }

    // 측면의 값 가져오기
    for (i = n; i >= 1; i--)
        scanf("%d", &(b[i]));
    
    // 측면에서 봤을 때 b[i]보다 값이 클 경우 b[i]로 변경
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if (a[i][j] > b[i]){
                a[i][j] = b[i];
            }
        }
    }

    // 합계를 계산
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            sum += a[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}