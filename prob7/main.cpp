#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    char a[101], b[101];
    int i, p = 0;

    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ')
        {
            if (a[i] >= 65 && a[i] <= 90) // 대문자 ('A': 65 ~ 'Z': 90)
                b[p++] = a[i] + 32;       // 대문자 + 32 -> 소문자
            else                          // 소문자 ('a': 97 ~ 'z': 122)
                b[p++] = a[i];
        }
    }

    b[p] = '\0';

    printf("%s\n", b);

    return 0;
}