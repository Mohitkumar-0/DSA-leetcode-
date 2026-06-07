class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum = 0;
        int i = max(1,n-k);
        while(i<=n+k){
            if(abs(n-i)<=k && (n&i) == 0){
                sum+=i;
            }
            i++;
        }
        return sum;
    }
};