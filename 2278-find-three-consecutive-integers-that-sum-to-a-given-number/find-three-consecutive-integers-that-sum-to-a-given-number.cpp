class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long n = 0;
        if(num % 3 != 0){
            return {};
        }
        n = num/3;
        return {n-1,n,n+1};
    }
};