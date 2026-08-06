class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = 0;
        while(true){
            int temp = n;
            int prod = 1;
            while(temp>0){
                int digit = temp%10;
                prod *= digit;
                temp = temp/10;
            }
            if(prod%t == 0){
                ans = n;
            }
            else{
                n++;
                continue;
            }
            break;
        }
        return ans;
    }
};