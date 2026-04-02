class Solution {
public:
    bool checkIfPangram(string sentence) {
       int hasht[26] = {0};
       for(int i  = 0; i<sentence.length(); i++){
        hasht[sentence[i] - 'a']++;
       }
       for(int i = 0; i<26;i++){
        if(hasht[i] == 0){
            return false;
        }
       }
       return true;
    }
};