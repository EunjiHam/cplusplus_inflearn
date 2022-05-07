#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[10][10];

int main()
{
    freopen("input.txt", "rt", stdin);

    int i, j, sum, ave, min, tmp, res;

    for (i = 1; i <= 9; i++){
        sum = 0;

        // 값을 읽으면서 행의 합계를 계산
        for (j = 1; j <= 9; j++){
            scanf("%d", &(a[i][j]));
            sum += a[i][j];
        }

        // 반올림하는 방법
        ave = (sum / 9.0) + 0.5;
        printf("%d ", ave);

        min = 21470000;
        for (j = 1; j <= 9; j++){
            tmp = abs(a[i][j] - ave);
            
            // 평균과의 차가 가장 작은 값을 저장
            if (tmp < min){
                min = tmp;
                res = a[i][j];
            }

            // 평균과의 차가 같을 경우 더 큰 값을 출력
            else if (tmp == min){
                if (a[i][j] > res){
                    res = a[i][j];
                }
            }
        }
        printf("%d\n", res);
    }


    return 0;
}