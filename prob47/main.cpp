#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

// int a[60][60];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, i, j, k, cnt = 0, flag;

    scanf("%d", &n);

    // vector 2차원 배열 선언 방법
    vector<vector<int> > a(n + 2, vector<int>(n + 2));

    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            scanf("%d", &(a[i][j]));
        }
    }

    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            flag = 0;

            // a[i][j]가 봉우리가 아닐 경우 flag를 1로 변경
            for (k = 0; k < 4; k++){
                if (a[i][j] <= a[i + dx[k]][j + dy[k]]){
                    flag = 1;
                    break;
                }
            }
            
            // flag가 0일 경우 카운트 증가
            if (flag == 0)
                cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}