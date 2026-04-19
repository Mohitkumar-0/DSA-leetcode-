class Solution {
public:
    int mirrorDistance(int n) {
        long long int ans = 0;
        int temp =  n;
        while(temp>0){
            int rem = temp%10;
            ans = (ans*10) + rem;
            temp=temp/10;
        }
        return abs(ans - n);
    }
};