class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.length()==0) return t.at(0);
        vector<int> hashs(26,0);
        vector<int> hasht(26,0);
        for(int i = 0;i<s.length();i++){
            hashs[s.at(i)-'a']++;
        }
        for(int i = 0;i<t.length();i++){
            hasht[t.at(i)-'a']++;
        }
        char ch;
        for(int i = 0;i<26;i++){
            if(hashs[i] != hasht[i]){
                ch = i + 'a';
            }
        }
        return ch;
    }
};