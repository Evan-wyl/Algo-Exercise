#include<vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        if(len <= 1){
            return 0;
        }
        int  i = 0;
        int j = len - 1;
        int area = 0;
        while (i < j)
        {
            area = max(area, min(height[i], height[j]) * (j - i));
            if(height[i] < height[j]){
                i ++;
            }else if(height[i] > height[j]){
                j --;
            }else{
                i ++;
                j --;
            }
        }
        return area;
    }
};