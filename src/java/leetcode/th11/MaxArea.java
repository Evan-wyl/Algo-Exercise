package java.leetcode.th11;

/**
 * @fileName: MaxArea.java
 * @author: wyli
 * @createTime: 2023/9/5 21:42
 * @description:
 */
public class MaxArea {
}

// 11. 盛最多水的容器
// https://leetcode.cn/problems/container-with-most-water/description/

/**
 * 固定一个边，变化可能存在大面积的板
 */
class Solution {
    public int maxArea(int[] height) {
        int len = height.length;
        int i = 0;
        int j = len - 1;
        int res = 0;
        while (i < j){
            res = height[i] < height[j] ? Math.max((j - i) * height[i++], res) : Math.max((j - i) * height[j--], res);
        }
        return res;
    }
}
