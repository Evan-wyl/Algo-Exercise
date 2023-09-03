package java.sorts;

/**
 * @fileName: InsertSort.java
 * @author: wyli
 * @createTime: 2023/9/3 21:51
 * @description:
 */
public class InsertSort {

    public static void insertSort(int[] a, int n){
        if (n <= 1) return;
        for (int i = 1; i < n; i++) {
            int j = i - 1;
            int value = a[i];
            for (;  j >= 0 ; j++) {
                if (a[j] > value){
                    a[j + 1] = a[j];
                }else{
                    break;
                }
            }
            a[j + 1] = value;
        }
    }

}
