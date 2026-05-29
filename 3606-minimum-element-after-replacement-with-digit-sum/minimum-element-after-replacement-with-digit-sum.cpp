class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i= 0;i<nums.size();i++){
            int temp = nums[i];
            int sum = 0;
            while(temp>0){
                int digit = temp%10;
                sum = sum + digit;
                temp = temp/10;
            }
            nums[i] = sum;
            if(nums[i] < mini){
                mini = nums[i];
            }
        }
        return mini;
    }
};