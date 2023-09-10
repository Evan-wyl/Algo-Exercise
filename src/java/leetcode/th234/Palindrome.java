package java.leetcode.th234;

/**
 * @fileName: Palindrome.java
 * @author: wyli
 * @createTime: 2023/9/10 21:44
 * @description:
 */
public class Palindrome {
}


class ListNode {
    int val;
    ListNode next;

    ListNode() {
    }

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}


/**
 * https://leetcode.cn/problems/palindrome-linked-list/?envType=study-plan-v2&envId=didi-2023-fall-sprint
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        if (head == null){
            return false;
        }
        ListNode cur = head;
        int len = 1;
        while (cur.next != null){
            cur = cur.next;
            len ++;
        }
        int[] arr = new int[len];
        cur = head;
        for (int i = 0; i < len; i++) {
            arr[i] = cur.val;
            cur = cur.next;
        }
        int low = 0;
        int high = len - 1;
        while (low < high){
            if (arr[low] != arr[high]){
                return false;
            }
            low ++;
            high --;
        }
        return true;
    }
}
