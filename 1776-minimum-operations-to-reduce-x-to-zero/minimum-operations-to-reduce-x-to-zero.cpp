class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        int sum = 0;
        mpp[0] = -1;
        for(int i =0;i<n;i++){
            sum+=nums[i];
            mpp[sum] = i;
        }
        if(sum<x) return -1;
        int rem = sum-x;
        int ans = INT_MIN;
        sum=0;
        for(int i =0;i<n;i++){
            sum+=nums[i];
            int findsum = sum-rem;
            if(mpp.find(findsum) != mpp.end()){
                int idx = mpp[findsum];
                ans = max(ans,i-idx);
            }
        }
        return ans==INT_MIN ? -1 : n-ans;
    }
};