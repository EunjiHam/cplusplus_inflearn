#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int ch[30], dis[30];

int main()
{
    freopen("input.txt", "rt", stdin);

    int i, n, m, a, b, x;

    vector<int> map[30];
    queue<int> Q;

    // 노드, 간선의 개수 읽어오기 
    scanf("%d %d", &n, &m);

    // map 읽어오기
    for (i = 1; i <= m; i++){
        scanf("%d %d", &a, &b);
        map[a].push_back(b);
    }

    // BFS 탐색
    Q.push(1);  // Q에 1 입력
    ch[1] = 1;  // 1번 노드 체크 

    // Q가 비어있을때 까지 반복
    while (!Q.empty()){
        x = Q.front();  // Q의 맨 앞 노드 읽어오기
        Q.pop();        // Q의 맨 앞 노드 출력

        for (i = 0; i < map[x].size(); i++){    // x에 연결된 노드의 개수만큼 반복
            if (ch[map[x][i]] == 0){    // 노드에 체크가 되어있지 않다면
                ch[map[x][i]] = 1;      // 체크하기
                Q.push(map[x][i]);      // Q에 노드를 입력
                dis[map[x][i]] = dis[x] + 1;    // "map[x][i]"의 간선 개수 = "x"의 간선 개수 + 1
            }
        }
    }

    for (i = 2; i <= n; i++){
        printf("%d: %d\n", i, dis[i]);
    }


    return 0;
}