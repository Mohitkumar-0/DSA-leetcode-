class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26] = {0};
        int hasht[26] = {0};
        for(int i = 0; i<s.size(); i++){
            hash[s[i]- 'a']++;
        }
        for(int i = 0; i<t.size(); i++){
            hasht[t[i]- 'a']++;
        }
        for(int i = 0; i<26; i++){
            if(hash[i] != hasht[i]){
                return false;
            }
        }
        return true;
    }
};