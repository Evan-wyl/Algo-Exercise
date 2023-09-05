package java.leetcode.th42;

import java.util.Stack;

/**
 * @fileName: Trap.java
 * @author: wyli
 * @createTime: 2023/9/5 21:51
 * @description:
 */
public class Trap {
}

// 42. 接雨水
// https://leetcode.cn/problems/trapping-rain-water/description/
class Solution {
    public int trap(int[] height) {
        int len = height.length;
        if (len == 0){
            return 0;
        }
        int res = 0;
        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < len; i++) {
            while (!stack.isEmpty() && height[i] > height[stack.peek()]){
                int curId = stack.pop();
                while (!stack.isEmpty() && height[stack.peek()] == height[curId]){
                    stack.pop();
                }
                if (!stack.isEmpty()){
                    int cur = stack.peek();
                    res += (Math.min(height[cur], height[i]) - height[curId]) * (i - cur - 1);
                }
            }
            stack.push(i);
        }
        return res;
    }
}
