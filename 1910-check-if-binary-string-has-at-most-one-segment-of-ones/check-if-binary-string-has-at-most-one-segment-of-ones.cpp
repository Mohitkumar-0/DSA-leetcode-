class Solution {
public:
    bool checkOnesSegment(string s) {
        for(int i = 1; i<s.length()-1; i++){
            if(s.at(i)=='0' && s.at(i+1) == '1'){
                return false;
            }
        }
        return true;
    }
};