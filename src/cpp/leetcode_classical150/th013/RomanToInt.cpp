#include<string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int preNum = getValue(s.at(0));
        for(int i = 1; i < s.length(); i++){
            int num = getValue(s.at(i));
            if(preNum > num){
                sum += preNum;
            }else{
                sum -= preNum;
            }
            preNum = num;
        }
        sum += preNum;
        return sum;
    }

    int getValue(char ch){
        switch(ch){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};
