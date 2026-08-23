class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int lsum = 0;
        int rsum = 0;
        int lque = 0;
        int rque = 0;
        for(int i=0;i<num.length();i++){
            if(num[i]=='?'){
                if(i<n/2){
                    lque++;
                }
                else{
                    rque++;
                }
            }
            else{
                if(i<n/2){
                    lsum += num[i]-'0';
                }
                else{
                    rsum += num[i]-'0';
                }
            }
        }
        int tque = lque + rque;
        if(tque%2!=0){
            return true;
        }
        int left = 2*lsum+9*lque;
        int right = 2*rsum+9*rque;
        if(left == right){
            return false;
        }
        return true;
    }
};