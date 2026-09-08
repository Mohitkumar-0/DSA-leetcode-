class Solution {
public:
    int countCommas(int n) {
        int res = 0;
        if(n<1000){
            return 0;
        }
        res = n-999;
        return res;
    }
};