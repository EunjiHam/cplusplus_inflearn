#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector<int> a(5);    // (소괄호) 크기가 5인 a라는 벡터 객체 1개 생성 

    // a.push_back(6);
    // a.push_back(8);
    // a.push_back(11);
    
    // cout << a.size() << endl;   // 벡터의 크기
    // cout << a[1] << endl;       // 1번 인덱스에 있는 원소

    /* -------------------------------------------- */

    // vector<int> c[3];       // [대괄호] c라는 이름을 가진 벡터 객체 3개 생성
    
    // c[0].push_back(1);
    // c[0].push_back(3);
    // c[0].push_back(5);      // C(0) [1, 3, 5]

    // c[1].push_back(2);
    // c[1].push_back(4);
    // c[1].push_back(6);      // C(1) [2, 4, 6]

    // c[2].push_back(7);      // C[2] [7]

    // cout << c[1][1] << endl;
    // cout << c[2][0] << endl;

    /* -------------------------------------------- */

    vector<pair<int, int> > g[3];
    g[1].push_back(make_pair(3, 5));
    g[1].push_back(make_pair(4, 7));
    g[1].push_back(make_pair(5, 9));

    g[2].push_back(make_pair(7, 7));

    cout << g[2][0].first << " " << g[2][0].second << endl;
}