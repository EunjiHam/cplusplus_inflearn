#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[51][51];

int main()
{
    freopen("input.txt", "rt", stdin);

    int H, W, h, w;
    int i, j;
    int k, l, sum = 0, max = -2147000000;

    scanf("%d %d", &H, &W);

    for (i = 1; i <= H; i++){
        for (j = 1; j <= W; j++){
            scanf("%d", &(a[i][j]));
        }
    }

    scanf("%d %d", &h, &w);

    for (i = 1; i <= H - h + 1; i++){
        for (j = 1; j <= W - w + 1; j++){
            sum = 0;
            for (k = 0; k < h; k++){
                for (l = 0; l < w; l++){
                    sum += a[i + k][j + l];
                }
            }

            if (max < sum)
                max = sum;
        }
    }

    printf("%d\n", max);

    return 0;
}
