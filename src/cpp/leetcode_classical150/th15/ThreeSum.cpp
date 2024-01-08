#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> arr;
        if(len < 3){
            return arr;
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < len; i ++){
            if(nums[i] > 0){
                break;
            }
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int L = i + 1;
            int R = len - 1;
            while(L < R){
                int sum = nums[i] + nums[L] + nums[R];
                if(sum == 0){
                    arr.emplace_back(vector<int>{nums[i], nums[L], nums[R]});
                    while (L < R && nums[L] == nums[L + 1]) L++;
                    while(L < R && nums[R] == nums[R - 1]) R--;
                    L ++;
                    R --;
                }else if(sum < 0) L ++;
                else if(sum > 0) R --;
            }
        }
        return arr;
    }
};