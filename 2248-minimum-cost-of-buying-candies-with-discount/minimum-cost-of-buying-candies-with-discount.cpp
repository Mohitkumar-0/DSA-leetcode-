class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int res = 0;
        int count = 0;
        sort(cost.begin(),cost.end(),greater<int>());
        for(int i = 0;i<cost.size();i++){
            count += 1;
            if(count > 2){
                count = 0;
            }
            else{
                res += cost[i];
            }
        }
        return res;
    }
};