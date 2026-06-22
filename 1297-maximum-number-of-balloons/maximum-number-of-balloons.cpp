class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26,0);
        for(int i = 0;i< text.length();i++){
            char ch = text[i];
            freq[ch-'a']++;
        }
        int ans = min({freq['b'-'a'],freq['a'-'a'],freq['l' - 'a']/2,freq['o'-'a']/2,freq['n'-'a']});
        return ans;
    }
};