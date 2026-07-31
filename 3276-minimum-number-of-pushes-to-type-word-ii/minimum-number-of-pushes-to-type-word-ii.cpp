class Solution {
public:
    int minimumPushes(string word) {
        vector<int>hasht(26,0);
        for(int i=0;i<word.length();i++){
            char ch = word[i];
            hasht[ch-'a']++;
        }
        sort(hasht.begin(),hasht.end());
        int ans = 0;
        int cnt = 0;
        for(int i = 25;i>=0;i--){
            if(hasht[i]==0) continue;
            if(cnt<8){
                ans+=hasht[i]*1;
                cnt++;
            }
            else if(cnt>=8&&cnt<16){
                ans+=hasht[i]*2;
                cnt++;
            }
            else if(cnt>=16&&cnt<24){
                ans+=hasht[i]*3;
                cnt++;
            }
            else if(cnt>=24){
                ans+=hasht[i]*4;
                cnt++;
            }
        }
        return ans;
    }
};