class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;
        int temp = n;
        while(temp>0){
            int digit = temp%10;
            nums.push_back(digit);
            temp = temp/10;
        }
        int x = INT_MIN;
        int y = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>x){
                y = x;
                x = nums[i];
            }
            else if(nums[i]>y){
                y = nums[i];
            }
        }
        return x*y;
    }
};