class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp;
        int ans=0;
        int low=0;
        for(int high=0;high<s.size();high++){
            mp[s[high]]++;
            while(mp[s[high]]>2){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
            }
            ans=max(ans,high-low+1);
        }
        return ans;
    }
};