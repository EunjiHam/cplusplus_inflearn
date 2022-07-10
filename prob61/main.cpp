#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[11], n, m, cnt = 0;

void DFS(int L, int val)
{
    if (L == n + 1){
        if (val == m)
            cnt++;
    }
    else {
        DFS(L + 1, val + a[L]);
        DFS(L + 1, val - a[L]);
        DFS(L + 1, val);
    }
}

int main()
{
    int i = 0;

    freopen("input.txt", "rt", stdin);

    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++)
        scanf("%d", &(a[i]));

    DFS(1, 0);

    if (cnt != 0)
        printf("%d\n", cnt);
    else 
        printf("-1\n");

    return 0;
}