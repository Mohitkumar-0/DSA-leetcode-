class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double ans = 0.0;
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int x = prices.size();
        int y = discounts.size();
        while(x>0 && y>0){
            ans+=(prices[x-1]*(100.0-discounts[y-1]))/100.0;
            x--;
            y--;
        }
        while(x>0){
            ans+=prices[x-1];
            x--;
        }
        return ans;
    }
};