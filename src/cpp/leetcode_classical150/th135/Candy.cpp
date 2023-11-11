#include<vector>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int len = ratings.size();
        vector<int> candy1(len, 1);
        vector<int> candy2(len, 1);
        int sum = 0;
        for(int i = 1; i < len; i ++){
            if(ratings[i] > ratings[i - 1]){
                candy1[i] = candy1[i - 1] + 1;
            }
        }
        for(int i = len - 2; i >= 0; i --){
            if(ratings[i] > ratings[i + 1]){
                candy2[i] = candy2[i + 1] + 1;
            }
        }
        for(int i = 0; i < len; i ++){
            sum  += max(candy1[i], candy2[i]);
        }
        return sum;
    }
};