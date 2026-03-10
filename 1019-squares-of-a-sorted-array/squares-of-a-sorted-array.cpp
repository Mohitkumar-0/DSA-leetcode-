class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int i = 0;
        int j = nums.size()-1;
        int k = nums.size()-1;
        while(i<=j){
            if(nums[i]*nums[i] <= nums[j]*nums[j]){
                res[k] = nums[j]*nums[j];
                j--;
                k--;
            }
            else{
                res[k] = nums[i]*nums[i];
                i++;
                k--;
            }
        }
        return res;
    }
};