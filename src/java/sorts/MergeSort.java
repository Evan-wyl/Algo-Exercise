package java.sorts;

/**
 * @fileName: MergeSort.java
 * @author: wyli
 * @createTime: 2023/9/3 21:20
 * @description:
 */
public class MergeSort {

    public static void mergeSort(int[] a, int n){
        mergeSortInternally(a, 0, n - 1);
    }

    public static void mergeSortInternally(int[] a, int p, int r){
        if (p >= r){
            return;
        }
        int q = p + (r - p) / 2;
        mergeSortInternally(a, p, q);
        mergeSortInternally(a, q + 1, r);
        merge(a, p, q , r);
    }

    public static void merge(int[] a, int p, int q, int r){
        int i = p;
        int j = q + 1;
        int k = 0;
        int[] tmp = new int[r - p + 1];
        while (i <= q && j <= r){
            if (a[i] <= a[j]){
                tmp[k++] = a[i++];
            }else{
                tmp[k++] = a[j++];
            }
        }
        int start = i;
        int end = q;
        if (j <= r){
            start = j;
            end = r;
        }
        while (start <= end){
            tmp[k ++] = a[start++];
        }
        for (int l = 0; l < r - p + 1; l++) {
            a[p + l] = tmp[l];
        }
    }

}
