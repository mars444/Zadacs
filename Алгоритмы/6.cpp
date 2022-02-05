#include <iostream>
#include <string.h>

#define MAX 55

using namespace std;

int main() {
    int dp[MAX][MAX];
    memset(dp,0,sizeof(dp));

    dp[1][1] = 1;


    for (int M = 1; M <= 10; M++) {

        for (int N = 1; N <= 10; N++) {

             for (int i = 2; i <= M; i++) {

                for (int j = 2; j <= N; j++) {

                    dp[i][j] = dp[i-1][j-2] + dp[i-2][j-1];

                    
                }
            }

                    cout<< "M == " << M;
                    cout<< "    N == " << N << "     ";
                    cout<< dp[N][M] << "\n";
        }
    }
    

   

    
    

}