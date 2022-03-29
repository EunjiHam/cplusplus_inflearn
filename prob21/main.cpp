#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);

    int i, A[10], B[10], as = 0, bs = 0, lw = 0;

    for (i = 0; i < 10; i++)
        scanf("%d", &(A[i]));

    for (i = 0; i < 10; i++)
        scanf("%d", &(B[i]));

    for (i = 0; i < 10; i++)
    {
        if (A[i] > B[i])
        {
            as = as + 3;
            lw = 1;
        }
        else if (A[i] < B[i])
        {
            bs = bs + 3;
            lw = 2;
        }
        else
        {
            as++;
            bs++;
        }
    }

    printf("%d %d\n", as, bs);
    if (as > bs)
    {
        printf("A\n");
    }
    else if (as < bs)
    {
        printf("B\n");
    }
    else
    {
        if (lw == 1)
            printf("A\n");
        else if (lw == 2)
            printf("B\n");
        else
            printf("D\n");
    }

    return 0;
}