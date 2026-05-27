class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lastlower(26,-1);
        vector<int> firstupper(26,-1);
        int count = 0;
        for(int i = 0;i<word.size();i++){
            char ch = word[i];
            if(islower(ch)){
                int idx = ch - 'a';
                lastlower[idx] = i;
            }
            else{
                int idx = ch - 'A';
                if(firstupper[idx] == -1){
                    firstupper[idx] = i;
                }
            }
        }
        for(int i = 0;i<26;i++){
            if(lastlower[i] != -1 && firstupper[i] != -1 && lastlower[i] < firstupper[i]){
                count++;
            }
        }
        return count;
    }
};