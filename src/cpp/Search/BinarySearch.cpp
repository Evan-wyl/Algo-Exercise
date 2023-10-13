#include<vector>

class Solution{
public:
    int binarySearch(std::vector<int>& arr, int value){
        int len = arr.size();
        int low = 0;
        int high = len - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] > value){
                high = mid - 1;
            }else if (arr[mid] < value)
            {
                low = mid + 1;
            }else{
                return mid;
            }
        }
        return -1;
    }

    //寻找第一个等于给定值的索引
    int binarySearch(std::vector<int>& arr, int value){
        int len = arr.size();
        int low = 0;
        int high = len - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] > value)
            {
                high = mid - 1;
            }else if (arr[mid] < value)
            {
                low = mid + 1;   
            }else{
                if (mid - 1 < 0 || arr[mid - 1] != value)
                {
                    return mid;
                }else{
                    high = mid - 1;
                }
                
            }
        }
        return - 1;
    }

    //寻找最后一个等于给定值的索引
    int binarySearch(std::vector<int>& arr, int value){
        int len = arr.size();
        int low = 0;
        int high = len - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] > value)
            {
                high = mid - 1;
            }else if (arr[low] < value)
            {
                low = mid + 1;
            }else{
                if (mid + 1 >= len || arr[mid + 1] != value)
                {
                    return mid;
                }else{
                    low = mid + 1;
                }
            }
        }
        return -1;
    }
};
