#include<iostream>
#include<vector>

class InsertSort{
public:
    void insertSort(std::vector<int>& arr){
        int len = arr.size();
        if (len <= 1)
        {
            return;
        }
        for (int i = 1; i < len; i++)
        {
            int j  = i - 1;
            int val = arr[i];
            for (; j >= 0; j--)
            {
                if (arr[j] > val)
                {
                    arr[j+ 1] = arr[j]; 
                }else{
                    break;
                }               
            }
            arr[j + 1] = val;
        }
        
    }
};
