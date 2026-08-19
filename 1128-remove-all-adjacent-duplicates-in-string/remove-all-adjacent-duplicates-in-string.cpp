class Solution {
public:
    string removeDuplicates(string s) {
        vector<char> res;
        string ans="";
        for(int i = 0;i<s.length();i++){
            if(res.size()==0) res.push_back(s[i]);
            else{
                if(res.back()==s[i]) res.pop_back();
                else{
                    res.push_back(s[i]);
                }
            }
        }
        for(int i =0;i<res.size();i++){
            char ch = res[i];
            ans += ch;
        }
        return ans;
    }
};