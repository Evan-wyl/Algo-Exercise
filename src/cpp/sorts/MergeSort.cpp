#include<iostream>
#include<vector>

using namespace std;

class MergeSort{
public:
    void mergeSort(vector<int> arr){
        int len = arr.size();
        mergeInternallySort(arr, 0, len - 1);
    }

    void mergeInternallySort(vector<int> arr, int k, int l){
        if(k >= l){
            return;
        }
        int pos = k + (l - k) / 2;
        mergeInternallySort(arr, k, pos);
        mergeInternallySort(arr, pos + 1, l);
        merge(arr, k, pos, l);
    }
    void merge(vector<int> arr, int k, int pos, int l){
        vector<int> tmp(l - k + 1);
        int i  = k;
        int j = pos + 1;
        int m = 0;
        while (i <= pos && j <= l)
        {
            if (arr[i] > arr[j])
            {
                tmp[m++] = arr[j++];
            }else{
                tmp[m++] = arr[i++];
            }
        }
        int start = i;
        int end = pos;
        if (j <= l)
        {
            start = j;
            end = l;
        }
        while (start <= end)
        {
            tmp[m++] = arr[start++];
        }
        for (int i = k; i < l + 1; i++)
        {
            arr[i] = tmp[i - k];
        }
    }
};

