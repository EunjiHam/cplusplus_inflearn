#include <stdio.h>

int check_a_win(int a, int b)
{
    int res = 0;

    if (a == b)
        return 0;

    if (a == 1)
    {
        if (b == 2)
            res = -1;
        else
            res = 1;
    }
    else if (a == 2)
    {
        if (b == 1)
            res = 1;
        else
            res = -1;
    }
    else if (a == 3)
    {
        if (b == 1)
            res = -1;
        else
            res = 1;
    }

    return res;
}

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, i, a[100], b[100], res;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &(a[i]));

    for (i = 0; i < n; i++)
        scanf("%d", &(b[i]));

    for (i = 0; i < n; i++)
    {
        res = check_a_win(a[i], b[i]);

        if (res == 0)
        {
            printf("D\n");
        }
        else if (res == 1)
        {
            printf("A\n");
        }
        else if (res == -1)
        {
            printf("B\n");
        }
    }

    return 0;
}