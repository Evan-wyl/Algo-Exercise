package java.sword2.th53I;

/**
 * @fileName: Search.java
 * @author: wyli
 * @createTime: 2023/9/7 22:02
 * @description:
 */
public class Search {
}

/**
 * https://leetcode.cn/problems/zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof/?envType=study-plan-v2&envId=coding-interviews
 */
class Solution {
    public int search(int[] nums, int target) {
        int len = nums.length;
        if (len == 0){
            return 0;
        }
        int low = 0;
        int high = len - 1;
        int mid  = 0;
        while (low <= high){
            mid  = low + (high - low) / 2;
            if (nums[mid] > target){
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            }else {
                if (mid == len - 1 || nums[mid + 1] != target){
                    break;
                }
                low = mid + 1;
            }
        }
        int right = mid;
        if (mid >= 0 && nums[mid] != target){
            return 0;
        }
        low = 0;
        high = len - 1;
        mid = 0;
        while (low <= high){
            mid = low + (high - low) / 2;
            if (nums[mid] > target){
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            }else {
                if (mid == 0 || nums[mid - 1] != target){
                    break;
                }
                high = mid - 1;
            }
        }
        int left = mid;
        return right - left + 1;
    }
}
