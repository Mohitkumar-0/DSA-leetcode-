class Solution {
public:
    int passwordStrength(string password) {
        int ans = 0;
        set<char> st;
        for(int i = 0;i<password.length();i++){
            st.insert(password[i]);
        }
        for(char ch : st){
            if(ch >= 'a' && ch <= 'z'){
                ans = ans + 1;
            }
            else if(ch >= 'A' && ch <= 'Z'){
                ans = ans + 2;
            }
            else if(ch >= '0' && ch <= '9'){
                ans = ans + 3;
            }
            else{
                ans = ans+5;
            }
        }
        return ans;
    }
};