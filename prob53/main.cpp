#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);

    int n, k;

    stack<int> s;

    char str[20] = "0123456789ABCDEF";
    scanf("%d %d", &n, &k);

    while (n > 0){
        s.push(n % k);
        n = n / k;
    }

    while (!s.empty()){
        printf("%c", str[s.top()]);
        s.pop();
    }

    return 0;
}