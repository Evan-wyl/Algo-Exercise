package java.Search;

/**
 * @fileName: BinarySearch.java
 * @author: wyli
 * @createTime: 2023/9/3 22:26
 * @description:
 */
public class BinarySearch {

    public int bSearch(int[] a, int n, int val){
        return bSearchInternally(a, 0, n - 1, val);
    }

    public int bSearchInternally(int[] a, int low, int high, int value){
        if (low > high) return -1;
        int mid =  low + (high - low) / 2;
        if (a[mid] == value){
            return mid;
        } else if (a[mid] < value) {
            return bSearchInternally(a, mid + 1, high, value);
        }else {
            return bSearchInternally(a, low, mid - 1, value);
        }
    }

    //查找第一个等于指定值的索引
    public int bSearch1(int[] a, int n, int value) {
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (a[mid] > value) {
                high = mid - 1;
            } else if (a[mid] < value) {
                low = mid + 1;
            } else {
                if ((mid == 0) || (a[mid - 1] != value)) return mid;
                else high = mid - 1;
            }
        }
        return -1;
    }

    //查找最后一个等于指定值的索引
    public int bSearch2(int[] a, int n, int value){
        int low = 0;
        int high = n - 1;
        while (low <= high){
            int mid = low + (high - low) / 2;
            if (a[mid] > value){
                high = mid - 1;
            }else if (a[mid] < value){
                low = mid + 1;
            }else {
                if ((mid == n - 1) || (a[mid + 1] != value)) return mid;
                else low = mid + 1;
            }
        }
        return -1;
    }

}
