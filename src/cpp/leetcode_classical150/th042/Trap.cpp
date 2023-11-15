#include<vector>
#include<stack>
#include<cmath>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        stack<int> s;
        int area = 0;
        for(int i = 0; i < len; i ++){
            while (!s.empty() && height[s.top()] < height[i])
            {
                int cur = s.top();
                s.pop();
                while (!s.empty() && height[s.top()] == height[cur])
                {
                    s.pop();
                }
                if(!s.empty()){
                    int j = s.top();
                    area += (min(height[i], height[j]) - height[cur]) * (i - j - 1);
                }
            }
            s.push(i);
        }
        return area;
    }
};