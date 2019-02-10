#include <stdio.h>
/**내가 푼거 아님 개쩌네 이 코드**/
int main(void){
    
    int N;
    int Dp[100001] = {};
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j*j <= i; j++){
            if (Dp[i] > Dp[i - j*j] + 1 || Dp[i] == 0)
                Dp[i] = Dp[i - j*j] + 1;
        }
    }
    
    printf("%d\n", Dp[N]);
 
    return 0;
}


출처: https://wootool.tistory.com/102 [우투리와툴툴]
