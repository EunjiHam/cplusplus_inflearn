#include <stdio.h>
using namespace std;

int main()
{
    int i, j, N = 0, cnt = 0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        printf("%d ", cnt);
        cnt = 0;
    }

    return 0;
}