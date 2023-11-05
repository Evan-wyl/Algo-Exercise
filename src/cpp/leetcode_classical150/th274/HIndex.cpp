#include<iostream>
#include<vector>
#include<deque>
#include<cmath>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int len = citations.size();
        int l = 0, r = len;
        while (l < r)
        {
            int mid = l + (r - l + 1) / 2;
            if(check(citations, mid)){
                l = mid;
            }else{
                r = mid - 1;
            }
        }
        return r;
    }
    bool check(vector<int> citations, int k){
        int len = citations.size();
        int cnt = 0;
        for(int i = 0; i < len; i++){
            if(citations[i] >= k){
                cnt ++;
            }
        }
        return cnt >= k;
    }
};
