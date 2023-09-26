package java.sorts;

/**
 * @fileName: QuickSort.java
 * @author: wyli
 * @createTime: 2023/9/3 21:19
 * @description:
 */
public class QuickSort {

    public static void quickSort(int[] a, int n){
        quickInternallySort(a, 0, n - 1);
    }
    public static void quickInternallySort(int[] a, int p, int r){
        if (p >= r){
            return;
        }
        int q = partition(a, p,  r);
        quickInternallySort(a, p, q - 1);
        quickInternallySort(a, q + 1, r);
    }
    public static int partition(int[] a, int p, int r){
        int pivot = a[r];
        int i = p;
        for (int j = p; j < r; j++) {
            if (a[j] < pivot){
                if (i == j){
                    i ++;
                }else{
                    int tmp = a[i];
                    a[i ++] = a[j];
                    a[j] = tmp;
                }
            }
        }
        int tmp = a[i];
        a[i] = a[r];
        a[r] = tmp;
        return i;
    }
}
