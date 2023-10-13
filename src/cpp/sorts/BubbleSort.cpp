#include<iostream>
#include<vector>

class BubbleSort{
public:
    void bubbleSort(std::vector<int>& arr){
        int len = arr.size();
        if(len <= 1){
            return;
        }
        bool flag = false;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; i < len - i - 1; i++)
            {
                if(arr[j] > arr[j + 1]){
                    int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                    flag = true;
                }
            }
            if (!flag)
            {
                break;
            }
            
        }
        
    }
};
