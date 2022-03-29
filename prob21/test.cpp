#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);

    int i, cnt_a = 0, cnt_b = 0;
    int a[10], b[10];

    for (i = 0; i < 10; i++)
        scanf("%d", &(a[i]));

    for (i = 0; i < 10; i++)
        scanf("%d", &(b[i]));

    for (i = 0; i < 10; i++)
    {
        if (a[i] > b[i])
            cnt_a += 3;
        else if (a[i] < b[i])
            cnt_b += 3;
        else
        {
            cnt_a++;
            cnt_b++;
        }
    }

    printf("%d %d\n", cnt_a, cnt_b);

    if (cnt_a > cnt_b)
    {
        printf("A\n");
    }
    else if (cnt_a < cnt_b)
    {
        printf("B\n");
    }
    else
    {
        i = 9;
        while (a[i] == b[i] && i >= 0)
        {
            i--;
        }

        if (a[i] > b[i])
            printf("A\n");
        else if (a[i] < b[i])
            printf("B\n");
        else
            printf("D\n");
    }

    return 0;
}