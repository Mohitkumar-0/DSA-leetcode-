class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap = 0;
        int small = 0;
        int n = word.size();
        for(int i = 0; i < word.size(); i++){
            if(isupper(word[i])){
                cap++;
            }
            else{
                small++;
            }
        }
        if(cap == n || small == n){
            return true;
        }
        else if(cap == 1 && isupper(word[0])){
            return true;
        }
        return false;
    }
};