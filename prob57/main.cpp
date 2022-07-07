#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

void D(int n)
{
    if (n == 0)
        return;
    else {
        D(n / 2);
        printf("%d", n % 2);
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