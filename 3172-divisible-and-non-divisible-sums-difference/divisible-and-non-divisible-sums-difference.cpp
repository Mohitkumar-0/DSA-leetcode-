class Solution {
public:
    int differenceOfSums(int n, int m) {
        int total = (n*(n+1)) /2;
        int k = n/m;
        int sum2 = m* (k *(k+1)) /2;
        int sum1 = total - sum2;
        return sum1 - sum2;
    }
};