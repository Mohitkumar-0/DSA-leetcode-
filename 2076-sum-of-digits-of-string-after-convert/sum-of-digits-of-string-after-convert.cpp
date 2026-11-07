class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";
        for(int i=0;i<s.length();i++){
            int digit = s[i]-'a'+ 1;
            num += to_string(digit);
        }
        int ans = 0;
        while(k){
            ans = 0;
            for(int i = 0;i<num.length();i++){
                ans+=num[i]-'0';
            }
            num = to_string(ans);
            k--;
        }
        return ans;
    }
};