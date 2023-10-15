#include<iostream>
#include<vector>

class Solution {
public:
    double soupServings(int n) {
        if (n > 4450)
        {
            return 1;
        }
        n = (n + 24) / 25;
        double dp[n + 1][n + 1];
        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < n + 1; i++)
            {
                dp[i][j] = 0.0;
            }
        }
        
        dp[0][0] = 0.5;
        for(int i = 1; i < n + 1; i++){
            dp[0][i] = 1;
        }
        for(int i = 1; i < n + 1; i++){
            for(int j = 1; j < n + 1; j++){
                int k = i > 4 ? i - 4 : 0;
                int l = j;
                double res1 = dp[k][l];
                k = i > 3 ? i - 3 : 0;
                l = j > 1 ? j - 1 : 0;
                double res2 = dp[k][l];
                k = i > 2 ? i - 2 : 0;
                l = j > 2 ? j - 2 : 0;
                double res3 = dp[k][l];
                k = i > 1 ? i - 1 : 0;
                l = j > 3 ? j - 3 : 0;
                double res4 = dp[k][l];
                dp[i][j] = 0.25 * (res1 + res2 + res3 + res4);
            }
        }
        return dp[n][n];
    }
};

