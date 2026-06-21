class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        if(costs[0] > coins) return 0;
        if(costs[0] == coins) return 1;
        int ans = 0;
        for(int i = 0;i<costs.size();i++){
            if(coins < costs[i]){
                break;
            }
            coins -= costs[i];
            ans++;
        }
        return ans;
    }
};