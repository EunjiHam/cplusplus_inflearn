#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);

    int ch[10] = {
        0,
    };

    int i, digit, max = -2147000000, res;
    char a[101];
    scanf("%s", &a);

    for (i = 0; a[i] != '\0'; i++)
    {
        digit = a[i] - 48; // a[i]는 아스키코드이므로 48을 빼야 숫자가 된다.
        ch[digit]++;
    }

    for (i = 0; i <= 9; i++)
    {
        if (ch[i] > max)
        {
            max = ch[i];
            res = i;
        }
        else if (ch[i] == max)
        {
            if (res < i)
                res = i;
        }
    }

    printf("%d\n", res);

    return 0;
}