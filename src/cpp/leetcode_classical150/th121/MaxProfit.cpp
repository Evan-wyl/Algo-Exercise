#include<vector>
#include<deque>
#include<cmath>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        deque<int> dq;
        int maxVal = 0;
        for(int i = 0; i < len; i++){
            while (!dq.empty() && dq.back() >= prices[i])
            {
                dq.pop_back();
            }
            dq.push_back(prices[i]);
            maxVal = max((prices[i] - dq.front()), maxVal);
        }
        return maxVal;
    }
};