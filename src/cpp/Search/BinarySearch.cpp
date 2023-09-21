#include<vector>

using namespace std;

class Solution{
public:
    int binarySearch(vector<int> arr, int value){
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
};
