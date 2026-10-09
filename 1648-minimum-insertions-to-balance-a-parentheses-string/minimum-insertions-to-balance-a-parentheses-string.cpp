class Solution {
public:
    int minInsertions(string s) {
        int cnt = 0;
        int ans = 0;
        for(int i= 0;i<s.length();i++){
            if(s[i]=='('){
                cnt++;
            }
            else{
                if(cnt>0){
                    cnt--;
                }
                else{
                    ans++;
                }
                if(i+1 < s.length() && s[i+1]==')'){
                    i++;
                }
                else{
                    ans++;
                }
            }
        }
        return ans + cnt*2;   
    }
};