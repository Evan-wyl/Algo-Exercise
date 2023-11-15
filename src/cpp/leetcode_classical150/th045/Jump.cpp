#include<vector>
#include<cmath>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums.size();
        int cnt = 0;
        int start = 0;
        int end = 1;
        while (end < len)
        {
            int maxPos = 0;
            for(int i = start; i < end; i++){
                maxPos = max(maxPos, i + nums[i]);
            }
            start = end;
            end = maxPos + 1;
            cnt ++;
        }
        return cnt;      
    }
};