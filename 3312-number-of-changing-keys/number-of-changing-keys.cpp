class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for(int i = 0;i<s.length()-1;i++){
            if(s.at(i) != s.at(i+1)){
                if( s.at(i+1) - s.at(i) != 32 && s.at(i+1) - s.at(i) != -32){
                    count++;
                }
            }
        }
        return count;
    }
};