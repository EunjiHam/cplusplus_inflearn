#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int map[51][51];

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, m, i, j;
    int a, b, c;

    // n: 정점의 개수
    // m: 간선의 개수
    scanf("%d %d", &n, &m);

    for (i = 1; i <= m; i++){
        // a: 행
        // b: 열
        // c: 가중치
        scanf("%d %d %d", &a, &b, &c);
        map[a][b] = c;  // 가중치 방향그래프
    }

    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}