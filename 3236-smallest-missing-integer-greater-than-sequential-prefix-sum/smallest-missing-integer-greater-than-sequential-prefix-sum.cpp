class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size()==1) return (nums[0]+1);
        vector<int> hasht(51,0);
        int ans = 0;
        int sum = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(nums[i] == nums[i-1]+1){
                sum+=nums[i];
            }
            else{
                break;
            }
        }
        for(int j = 0;j<nums.size();j++){
            hasht[nums[j]]++;
        }
        while(sum<=50 && hasht[sum]>0){
            sum++;
        }
        return sum;
    }
};