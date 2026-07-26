class Solution {
public:
    int maxProduct(int n) {
        int x = INT_MIN;
        int y = INT_MIN;
        int temp = n;
        while(temp>0){
            int digit = temp%10;
            if(digit>x){
                y = x;
                x = digit;
            }
            else if(digit>y){
                y = digit;
            }
            temp = temp/10;
        }
        return x*y;
    }
};