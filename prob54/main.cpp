#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    stack<char> s;

    char a[31] = { 0, };

    int i;

    scanf("%s", a);
    
    for (i = 0; a[i] != '\0'; i++){
        if (a[i] == '('){
            s.push(a[i]);
        }
        else {
            if (s.empty()){
                printf("NO\n");
                return 0;
            }

            s.pop();
        }
    }

    if (s.empty()){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}