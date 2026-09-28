/* Take a hashmap, Enter the char and its freq from string t in it. Iterate over s and for each char
reduce its value in map by one And when the value is > 0 increase the cnt and check if cnt == m
when at a point you find the cnt == m then start reducing from the left to shrink the window and store the 
starting index for each valid substring while updating the minlen. If at anypoint while shrinking the 
value of the char in map goes > 0 decrease the cnt value and start increasing the window size from right
until you get a valid window. Iterate till the end of the string. You will be having the minlen of the window
and the starting Index for the min window. return the value using the method s.substr(sIndex,minlen)
*/


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