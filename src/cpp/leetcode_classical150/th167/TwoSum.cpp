#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        vector<int> arr(2);
        while(i < j){
            if(numbers[i] + numbers [j] > target){
                j--;
            }else if (numbers[i] + numbers[j] < target)
            {
                i ++;
            }else{
                arr[0] = i + 1;
                arr[1] = j + 1;
                break;
            }
        }
        return arr;
    }
};