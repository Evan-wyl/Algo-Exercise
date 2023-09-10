package java.leetcode.th238;

import java.util.Stack;

/**
 * @fileName: ProductExceptSelf.java
 * @author: wyli
 * @createTime: 2023/9/5 22:23
 * @description:
 */
public class ProductExceptSelf {
}


/**
 * 238. 除自身以外数组的乘积
 * https://leetcode.cn/problems/product-of-array-except-self/description/
 */
class Solution {
    public int[] productExceptSelf(int[] nums) {
        int len = nums.length;
        int[] arr = new int[len];
        int[] arr1 = new int[len];
        int[] arr2 = new int[len];
        arr1[0] = 1;
        arr2[len - 1] = 1;
        for (int i = 1; i < len; i++) {
            arr1[i] = arr1[i - 1] * nums[i - 1];
        }
        for (int i = len - 2; i >= 0; i--) {
            arr2[i] = arr2[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < len; i++) {
            arr[i] = arr1[i] * arr2[i];
        }
        return arr;
    }
}
