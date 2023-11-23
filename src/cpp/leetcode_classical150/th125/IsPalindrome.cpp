#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()){
            return true;
        }
        int a = 0, b = s.size() - 1;
        while(a < b){
            while(a < b && !(isdigit(s[a]) || isalpha(s[a]))) a++;
            while(a < b && !(isdigit(s[b]) || isalpha(s[b]))) b--;
            if(tolower(s[a]) == tolower(s[b])){
                a ++;
                b --;
            }else{
                return false;
            }
        }
        return true;
    }
};