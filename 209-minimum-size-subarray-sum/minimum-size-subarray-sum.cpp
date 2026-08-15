class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int i=0;
        int j=0;
        int len = INT_MAX;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target && i<=j){
                len = min(len,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(len == INT_MAX) return 0;
        return len;
    }
};