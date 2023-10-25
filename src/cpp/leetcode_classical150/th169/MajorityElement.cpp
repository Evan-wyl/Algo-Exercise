#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> map;
        for(int i = 0; i < len; i++){
            if(map.find(nums[i]) == map.end()){
                map[nums[i]] = 1; 
            }else{
                map[nums[i]] = map[nums[i]] + 1;
            }
            if(map[nums[i]] > (len / 2)){
                return nums[i];
            }
        }
        return nums[0];
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        int x = 0, vote = 0;
        for(int i = 0; i < len; i++){
            if(vote == 0){
                x = nums[i];
            }
            vote += nums[i] == x ? 1 : -1;
        }
        return x;
    }
};
