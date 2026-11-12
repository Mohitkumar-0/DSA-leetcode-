class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int leni = 1;
        int lend = 1;
        int maxi = 1;
        int maxd = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]){
                leni++;
            }
            else{
                leni = 1;
            }
            maxi = max(leni,maxi);
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                lend++;
            }
            else{
                lend = 1;
            }
            maxd = max(maxd,lend);
        }
        return max(maxi,maxd);
    }
};