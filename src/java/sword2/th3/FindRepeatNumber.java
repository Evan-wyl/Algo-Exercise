package java.sword2.th3;

/**
 * @fileName: FindRepeatNumber.java
 * @author: wyli
 * @createTime: 2023/9/7 22:01
 * @description:
 */
public class FindRepeatNumber {
}

/**
 * https://leetcode.cn/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/?envType=study-plan-v2&envId=coding-interviews
 */
class Solution {
    public int findRepeatNumber(int[] nums) {
        int len = nums.length;
        for (int i = 0; i < len; i++) {
            int tmp = nums[i];
            nums[i] = nums[tmp];
            nums[tmp] = tmp;
            if (nums[nums[i]] == nums[i] && i != nums[i]){
                return nums[i];
            }
        }
        return -1;
    }
}
