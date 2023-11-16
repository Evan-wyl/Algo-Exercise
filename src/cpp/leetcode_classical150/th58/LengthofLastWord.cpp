#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int cnt = 0;
        int last_cnt = 0;
        for(int i = 0; i < len; i++){
            if(s.at(i) == ' '){
                last_cnt = cnt;
                cnt = 0;
                while(i < len && s.at(i) == ' '){
                    i ++;
                }
            }
            if(i < len){
                cnt ++;
            }
        }
        return cnt == 0 ? last_cnt : cnt;
    }
};

