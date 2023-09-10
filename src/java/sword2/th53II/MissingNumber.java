package java.sword2.th53II;

/**
 * @fileName: MissingNumber.java
 * @author: wyli
 * @createTime: 2023/9/10 20:48
 * @description:
 */
public class MissingNumber {
}

class Solution {
    public int missingNumber(int[] nums) {
        int len = nums.length;
        int num = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] != i){
                num = i;
                break;
            }
        }
        return nums[len - 1] != len ? len : num;
    }
}
