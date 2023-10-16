#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int j = len - 1;
        for (int i = 0; i <= j; i++)
        {
            if(nums[i] == val){
                int tmp = nums[i];
                nums[i--] = nums[j];
                nums[j--] = tmp;
            }
        }
        return j + 1;
    }
};
