#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

void D(int x)
{
    if (x == 0)
        return;

    else {
        D(x-1);
        printf("%d ", x);
    }
}

int main()
{
    freopen("input.txt", "rt", stdin);

    int n = 0;

    scanf("%d", &n);

    D(n);

    return 0;
}