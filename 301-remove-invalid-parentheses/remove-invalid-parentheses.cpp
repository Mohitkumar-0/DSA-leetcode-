class Solution {
public:
    unordered_set<string> st;
    void solve(string& s, int index, string& curr, int count, int& maxlen){
        if(count<0) return;
        if(index==s.length()){
            if(count==0){
                if(curr.length()>maxlen){
                    maxlen = curr.length();
                    st.clear();
                }
                if(curr.length()==maxlen){
                    st.insert(curr);
                }
            }
            return;
        }
        if(s[index]!='(' && s[index]!=')'){
            curr.push_back(s[index]);
            solve(s,index+1,curr,count,maxlen);
            curr.pop_back();
            return;
        }
        curr.push_back(s[index]);
        solve(s,index+1,curr,count+(s[index]=='(' ? 1:-1),maxlen);
        curr.pop_back();
        solve(s,index+1,curr,count,maxlen);
    }
    vector<string> removeInvalidParentheses(string s) {
        int n = s.length();
        int maxlen = 0;
        st.clear();
        string curr = "";
        solve(s,0,curr,0,maxlen);
        return vector<string>(begin(st),end(st));
    }
};