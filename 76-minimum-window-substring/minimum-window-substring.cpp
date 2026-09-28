class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();
        int hasht[256] = {0};
        int l = 0, r = 0, sIndex = -1, cnt = 0 ,minLen = INT_MAX;
        for(int i =0;i<m;i++){
            hasht[t[i]]++;
        }
        while(r<n){
            if(hasht[s[r]]>0){
                cnt += 1;
            }
            hasht[s[r]]--;
            while(cnt==m){
                if(r-l+1 < minLen){
                    minLen = r-l+1;
                    sIndex = l;
                }
                hasht[s[l]]++;
                if(hasht[s[l]]>0) cnt = cnt-1;
                l++;
            }
            r=r+1;
        }
        return sIndex == -1 ? "" : s.substr(sIndex,minLen);
    }
};