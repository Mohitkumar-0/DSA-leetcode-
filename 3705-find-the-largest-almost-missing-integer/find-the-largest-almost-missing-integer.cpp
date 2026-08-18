class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int hasht[51] = {0};
        if(k==nums.size()) return *max_element(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            hasht[nums[i]]++;
        }
        if(k==1){
            for (int x = 50; x >= 0; x--) {
                if (hasht[x] == 1) {
                    return x;
                }
            }
        }
        int ans = -1;
        if(hasht[nums[0]]==1){
            ans = max(ans,nums[0]);
        }
        if(hasht[nums[n-1]]==1){
            ans = max(ans,nums[n-1]);
        }
        return ans;
    }
};