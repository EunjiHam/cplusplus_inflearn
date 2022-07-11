#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int map[21][21], ch[30], cnt = 0;
int n;

void DFS(int v)
{
    int i = 0;

    if (v == n){
        cnt++;
    }
    else {
        for (i = 1; i <= n; i++){
            if (map[v][i] == 1 && ch[i] == 0){
                ch[i] = 1;
                DFS(i);
                ch[i] = 0;
            }
        }    
    }
}

int main()
{
    freopen("input.txt", "rt", stdin);

    int i, j;
    int m;
    int a, b;

    // n: 정점의 개수, m: 간선의 개수
    scanf("%d %d", &n, &m);
    
    // 간선의 개수만큼 인접행렬(방향그래프) 읽기
    for (i = 1; i <= m; i++){
        scanf("%d %d", &a, &b);
        map[a][b] = 1;
    }

    // 1번 정점은 방문했음 
    ch[1] = 1;
    DFS(1);

    printf("%d\n", cnt);

    return 0;
}