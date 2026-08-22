class Solution {
public:
    bool checkDivisibility(int n) {
        int ans = 1;
        int temp = n;
        int sum = 0;
        int prod = 1;
        while(temp>0){
            int digit = temp%10;
            sum+=digit;
            prod*=digit;
            temp = temp/10;
        }
        int res = sum + prod;
        if(n%res != 0) ans = 0;
        return ans;
    }
};