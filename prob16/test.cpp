#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);

    char a[101], b[101];

    scanf("%s", &a);
    scanf("%s", &b);

    int cnt_a[52] = {
        0,
    };
    int cnt_b[52] = {
        0,
    };

    int i;

    // 알파벳 대문자, 'A':65 ~ 'Z':97
    // 알파벳 소문자, 'a':97 ~ 'z':122

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            cnt_a[a[i] - 65]++;
        }
        else if (a[i] >= 97 && a[i] <= 122)
        {
            cnt_a[a[i] - 97 + 26]++;
        }
    }

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] >= 65 && b[i] <= 90)
        {
            cnt_b[b[i] - 65]++;
        }
        else if (b[i] >= 97 && b[i] <= 122)
        {
            cnt_b[b[i] - 97 + 26]++;
        }
    }

    for (i = 0; i < 52; i++)
    {
        if (cnt_a[i] != cnt_b[i])
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}