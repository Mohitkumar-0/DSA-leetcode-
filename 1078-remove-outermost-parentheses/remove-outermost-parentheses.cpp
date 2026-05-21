class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int level = 0;
        for(int i = 0;i<s.length();i++){
            char ch = s[i];
            if(ch == '('){
                if(level > 0) result += ch;
                level++; 
            }
            else if(ch == ')'){
                level--;
                if(level > 0) result += ch;
            }
        }
        return result;
    }
};