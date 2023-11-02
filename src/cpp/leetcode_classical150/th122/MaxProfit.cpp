#include<vector>
#include<deque>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        deque<int> dq;
        int sum = 0;
        for(int i = 0; i < len; i++){
            if(!dq.empty() && prices[i] > dq.back()){
                sum += prices[i] - dq.back();
            }
            while(!dq.empty() && prices[i] < dq.back()){
                dq.pop_back();
            }
            dq.push_back(prices[i]);
        }
        return sum;
    }
};
