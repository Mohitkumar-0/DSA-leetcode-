class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hasht(256,-1);
        int l = 0;
        int r = 0;
        int maxlen = 0;
        int n = s.length();
        while(r<n){
            if(hasht[s[r]] != -1){
                if(hasht[s[r]] >= l){
                    l = hasht[s[r]]+1;
                }
            }
            int len = r-l+1;
            maxlen = max(len,maxlen);
            hasht[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};