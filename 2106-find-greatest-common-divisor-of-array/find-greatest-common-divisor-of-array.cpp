class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(nums[i] < mini){
                mini = nums[i];
            }
            else if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        if(maxi % mini == 0) return mini;
        int ans = 1;
        for(int i = 2;i<mini;i++){
            if(mini % i == 0 && maxi % i == 0){
                ans = i;
            }
        }
        return ans;
    }
};