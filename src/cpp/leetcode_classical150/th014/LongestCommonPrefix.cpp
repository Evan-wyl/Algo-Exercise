#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        const auto [str0, str1] = minmax_element(strs.begin(), strs.end());
        for(int i = 0; i < str0->size(); ++i){
            if(str0->at(i) != str1->at(i)){
                return str0->substr(0, i);
            }
        }
        return *str0;
    }
};