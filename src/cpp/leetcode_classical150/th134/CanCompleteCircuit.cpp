#include<vector>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int len = gas.size();
        vector<int> arr(len, 0);
        for(int i = 0; i < len; i++){
            arr[i] = gas[i] - cost[i];
        }
        int res = -1;
        for(int i = 0; i < len; i++){
            res += arr[i];
        }
        if(res < -1){
            return -1;
        }
        res = 0;
        int pos = 0;
        for(int i = 0; i < len; i ++){
            res += arr[i];
            if(res < 0){
                res = 0;
                pos = i + 1;
            }
        }
        return pos;
    }
};
