#include<vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> answer(len, 1);
        for(int i = 1; i < len; i++){
            answer[i] = answer[i - 1] * nums[i - 1];
        }
        int val = 1;
        for(int i = len - 2; i >= 0; i--){
            val = val * nums[i + 1];
            answer[i] = answer[i] * val;
        }
        return answer;
    }
};