#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

void D(int v)
{
    if (v > 7)  return;
    else {
        // printf("%d ", v);   // 전위순회

        D(v * 2);       // left node

        printf("%d ", v);   // 중위순회

        D(v * 2 + 1);   // right node

        // printf("%d ", v );   // 후위순회
    }
}

int main()
{
    freopen("input.txt", "rt", stdin);

    D(1);

    return 0;
}