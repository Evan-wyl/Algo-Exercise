#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int i = 0;
        int j = len - 1;
        int area = 0;
        while (i < j)
        {
            area =  height[i] > height[j] ? max((j - i) * height[j--], area) : max(area, (j - i) * height[i++]);
        }
        return area;
    }
};

