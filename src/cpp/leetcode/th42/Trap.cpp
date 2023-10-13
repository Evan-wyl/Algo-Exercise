#include<cmath>
#include<vector>
#include<stack>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> s;
        int area = 0;
        int len = height.size();
        for(int i = 0; i < len; i++){
            while (!s.empty() && height[i] > height[s.top()])
            {
                int j = s.top();
                s.pop();
                while (!s.empty() && height[s.top()] == height[j])
                {
                    s.pop();
                }
                
                if(!s.empty()){
                    int cur = s.top();
                    area += (min(height[i], height[cur]) - height[j]) * (i - cur - 1);
                }
            }
            s.push(i);
        }
        return area;
    }
};
