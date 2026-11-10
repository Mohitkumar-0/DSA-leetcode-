class Solution {
public:
    bool checkRecord(string s) {
        bool ans = false;
        int count = 0;
        int i=0;
        while(i<s.length()){
            if(s[i]=='A'){
                count++;
            }
            if(s[i]=='L' && i<=s.length()-2 &&  s[i+1]=='L' && s[i+2]=='L'){
                return false;
            }
            i++;
        }
        if(count<2){
            ans = true;
        }
        return ans;
    }
};