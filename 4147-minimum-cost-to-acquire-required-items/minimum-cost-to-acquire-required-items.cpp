class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = 0;
        long long x = min(need1,need2);
        ans+=min(x*costBoth,x*cost1+x*cost2);
        long long rem1 = need1-x;
        long long rem2 = need2-x;
        if(cost1<costBoth){
            ans+=rem1*cost1;
        }
        else{
            ans+=rem1*costBoth;
            rem2 = rem2-rem1;
        }
        if(rem2<=0){
            return ans;
        }
        else if(cost2<costBoth){
            ans+=rem2*cost2;
        }
        else{
            ans+=rem2*costBoth;
        }
        return ans;
    }
};