#include<iostream>
#include<vector>


class QuickSort{
public:
    void quickSort(std::vector<int>& arr){
        int len = arr.size();
        quickInternallySort(arr, 0, len - 1);
    }
    
    void quickInternallySort(std::vector<int>& arr, int i, int j){
        if(i >= j){
            return;
        }
        int pos = partition(arr, i, j);
        quickInternallySort(arr, i, pos - 1);
        quickInternallySort(arr, pos + 1, j);
    }

    int partition(std::vector<int>& arr, int i, int j){
        int val = arr[j];
        int l = i;
        int k = i;
        for (; k < j; k++)
        {
            if (arr[k] < val)
            {
                if (k == l)
                {
                    l++;
                }else{
                    int tmp = arr[k];
                    arr[k] = arr[l];
                    arr[l ++] = tmp;
                }
            }
        }
        arr[j] = arr[l];
        arr[l] = val;
        return l;
    }
};
