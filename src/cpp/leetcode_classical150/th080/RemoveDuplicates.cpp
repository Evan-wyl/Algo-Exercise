#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if(len <= 2){
            return len;
        }
        int j = 2;
        for(int i = 2; i < len; i++){
            if(nums[i] != nums[j - 2]){
                nums[j] = nums[i];
                j ++;
            }
        }
        return j;
    }
};