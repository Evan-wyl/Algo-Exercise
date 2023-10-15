#include<vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> arr1(len);
        vector<int> arr2(len);
        arr1[0] = 1;
        arr2[len - 1] = 1;
        for(int i = 1; i < len; i++){
            arr1[i] = arr1[i - 1] * nums[i - 1];
            arr2[len - 1 - i] = arr2[len - i] * nums[len - i];
        }
        vector<int> arr(len);
        for(int i = 0;i < len; i++){
            arr[i] = arr1[i] * arr2[i];
        }
        return arr;
    }
};

