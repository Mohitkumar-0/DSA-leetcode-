class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        if(strs.size() == 1) return strs[0];
        string com = strs[0];
        string res;
        for(int i = 1;i<strs.size();i++){
            int j = 0;
            res = "";
            while(j<strs[i].length() && j < com.length()){
                if(strs[i][j] == com[j]){
                    res.push_back(strs[i][j]);
                    j++;
                }
                else{
                    break;
                }
            }
            com = res;
        }
        return res;
    }
};