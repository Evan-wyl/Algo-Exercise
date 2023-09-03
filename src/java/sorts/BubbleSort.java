package java.sorts;

/**
 * @fileName: BubbleSort.java
 * @author: wyli
 * @createTime: 2023/9/3 21:45
 * @description:
 */
public class BubbleSort {

    public static void bubbleSort(int[] a, int n){
        if (n <= 1) return;
        boolean flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]){
                    int tmp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tmp;
                    flag = true;
                }
            }
            if (!flag) break;
        }
    }

}
