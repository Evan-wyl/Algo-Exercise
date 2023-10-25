#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if (len <= 1)
        {
            return 1;
        }
        int j = 0;
        for(int i = 0; i < len; i++){
            if(nums[j] != nums[i]){
                nums[++j] = nums[i];
            }
        }
        return j + 1;
    }
};
