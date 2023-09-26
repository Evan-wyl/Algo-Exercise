#include<iostream>
#include<vector>

using namespace std;

class KthSmallest{
public:
    int kthSmallest(vector<int> arr, int k){
        int len  = arr.size();
        if(len < k){
            return -1;
        }
        int pos = partition(arr, 0, len - 1);
        while (pos + 1 != k)
        {
            if (pos + 1 > k)
            {
                pos = partition(arr, 0, pos - 1);
            }else{
                pos = partition(arr, pos + 1, len - 1);
            }
        }
        return arr[pos];
    }

    int partition(vector<int> arr, int k, int l){
        int j = k;
        for (int i = k; i < l; i++)
        {
            // [1,1,2]
            if (arr[i] <= arr[l])
            {
                if (i == j)
                {
                    j ++;
                }else{
                    int tmp = arr[j];
                    arr[j++] = arr[i];
                    arr[i] = tmp;
                }
            }
        }
        int tmp = arr[l];
        arr[l] = arr[j];
        arr[j] = tmp;
        return j;
    }
};
