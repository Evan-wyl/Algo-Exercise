package java.leetcode.th808;

/**
 * @fileName: SoupServing.java
 * @author: wyli
 * @createTime: 2023/9/10 21:02
 * @description:
 */
public class SoupServing {
}

/**
 * https://leetcode.cn/problems/soup-servings/?envType=study-plan-v2&envId=didi-2023-fall-sprint
 */
class Solution {
    public double soupServings(int n) {
        if (n > 4450){
            return 1;
        }
        n = (int) Math.ceil(n / 25d);
        double[][] dp = new double[n + 1][n + 1];
        dp[0][0] = 0.5;
        for (int i = 1; i < n + 1; i++) {
            dp[0][i] = 1;
        }
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                dp[i][j] = 0.25 * (dp[Math.max(i - 4, 0)][j] + dp[Math.max(i - 3, 0)][Math.max(j - 1, 0)] + dp[Math.max(i - 2, 0)][Math.max(j - 2, 0)] + dp[Math.max(i - 1, 0)][Math.max(j - 3, 0)]);
            }
        }
        return dp[n][n];
    }
}
