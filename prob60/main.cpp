#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int n, a[11], total;
bool flag = false;

void DFS(int L, int sum)
{
    if (sum > (total / 2))
        return;

    if (flag == true)
        return;

    if (L == n + 1){
        if (sum == (total - sum)){
            flag = true;
        }
    }
    else{
        DFS(L + 1, sum + a[L]);
        DFS(L + 1, sum);        
    }
}

int main()
{
    freopen("input.txt", "rt", stdin);

    int i = 0;
    
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%d", &(a[i]));
        total += a[i];
    }

    DFS(1, 0);

    if (flag == true){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}