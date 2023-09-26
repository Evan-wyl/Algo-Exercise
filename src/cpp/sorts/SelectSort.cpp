#include<iostream>
#include<vector>

using namespace std;

class SelectSort{
public:
    void selectSort(vector<int> arr){
        int len = arr.size();
        if (len <= 1)
        {
            return;
        }
        for (int i = 0; i < len - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; i < len; i++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
            int tmp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tmp;
        }
        
    }
};