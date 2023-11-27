#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = s.size() - 1;
        for(int i = t.size() - 1; i >= 0; i --){
            if(j >= 0 && s.at(j) == t.at(i)){
                j --;
            }
        }
        return j == -1;
    }
};