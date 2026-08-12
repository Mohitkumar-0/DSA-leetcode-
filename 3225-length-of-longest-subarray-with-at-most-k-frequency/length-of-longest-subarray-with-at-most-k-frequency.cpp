class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int i=0;
        int j = 0;
        int res = 0;
        while(j<n){
            mpp[nums[j]]++;
            while(i<j && mpp[nums[j]]>k){
                mpp[nums[i]]--;
                i++;
            }
            res = max(res,j-i+1);
            j++;
        }
        return res;
    }
};